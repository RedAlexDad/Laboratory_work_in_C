#pragma warning(disable : 4996)

// Подключение базовые библиотеки
#include <stdio.h>
#include <math.h>
#include <process.h>
#include <stdlib.h> 
//#include <iostream>
#include <cstdio>
// Подключение библиотеки для выполнения функции выделения памяти
#include <malloc.h>
// Подключение библиотеки для выполнения функции со строками
#include <string.h>

#include "header.h"

// Печать на экран структуры
void Print_Vehicles(Vehicles S)
{
    printf("Марка: %25s \n", S.Marka_car);
    printf("Модель: %24s\n", S.Model_car);
    printf("Тип кузова: %20s \n", S.Corpuse);
    printf("Год выпуска: %16d г.\n", S.Date_year);
    printf("Стоимость: %14.3lf Рублей\n", S.Price);
    printf("\n");
}

// Печать на экран структуры через указатели
void Print_Vehicles_Pointer(Vehicles* S)
{
    printf("Марка: %25s \n", S->Marka_car);
    printf("Модель: %24s\n", S->Model_car);
    printf("Тип кузова: %20s \n", S->Corpuse);
    printf("Год выпуска: %16d г.\n", S->Date_year);
    printf("Стоимость: %14.3lf Рублей\n", S->Price);
    printf("\n");
}

// Присваивание и копирование через квалицифированную ссылку:
void Vehicles_Fill(Vehicles* S)
{
    strcpy(S->Marka_car, "BMW");
    strcpy(S->Model_car, "BMW 3");
    strcpy(S->Corpuse, "Седан");
    S->Date_year = 2012;
    S->Price = 1200000;
}

// Заполнение структуру через консольного окна
void Vehicles_Input(Vehicles* S)
{
    /*
        Ошибка: С6031 Возвращаемое значение пропущено "scanf"
        Для решение эту проблему нужно:

        (void)scanf("%s", <string>);

    */
    char MARKA[100], MODEL[100], CORPUSE[100];
    int DATE;
    double PRICE;
    // Присваивание и копирование:
    printf("Марка машины: ");
    (void)scanf("%s", MARKA);
    MARKA[strlen(MARKA)] = '\0';
    strcpy(S->Marka_car, MARKA);
    printf("Модель машины: ");
    (void)scanf("%s", MODEL);
    MODEL[strlen(MODEL)] = '\0';
    strcpy(S->Model_car, MODEL);
    printf("Тип кузова: ");
    (void)scanf("%s", CORPUSE);
    CORPUSE[strlen(CORPUSE)] = '\0';
    strcpy(S->Corpuse, CORPUSE);
    printf("Дата выпуска: ");
    scanf_s("%d", &DATE);
    S->Date_year = DATE;
    printf("Стоимость: ");
    scanf_s("%lf", &PRICE);
    S->Price = PRICE;
    printf("\n");
}

void Structure_Vehicles_Input_FGETS(Vehicles* S)
{
    /*
    Ошибка: С6031 Возвращаемое значение пропущено "scanf"
    Для решение эту проблему нужно:

    char * fgets( char * string, int num, FILE * filestream );
    Параметры:
        string
        Указатель на массив типа char, в который сохраняются считанные символы.
        num
        Максимальное количество символов для чтения, включая нулевой символ.
        filestream
        Указатель на объект типа FILE, который идентифицирует поток, из которого считываются символы.

    Для чтения из стандартного ввода, stdin может быть использован в качестве этого параметра.

    Нулевой символ автоматически добавляется в строку str после прочитанных символов, чтобы сигнализировать о конце строки.
    */
    char MARKA[100], MODEL[100], CORPUSE[100];
    int DATE, PRICE;
    // Присваивание и копирование:
    printf("Марка машины: ");
    fgets(MARKA, 100, stdin);
    strcpy(S->Marka_car, MARKA);
    printf("Модель машины: ");
    fgets(MODEL, 100, stdin);
    strcpy(S->Model_car, MODEL);
    printf("Тип кузова: ");
    fgets(CORPUSE, 100, stdin);
    strcpy(S->Corpuse, CORPUSE);
    printf("Дата выпуска: ");
    scanf_s("%d", &DATE);
    S->Date_year = DATE;
    printf("Стоимость: ");
    scanf_s("%d", &PRICE);
    S->Price = PRICE;
    printf("\n");

}

// Копирование структуры
void Copy_Vehicles(Vehicles* S1, Vehicles* S2)
{
    strcpy(S1->Corpuse, S2->Corpuse);
    strcpy(S1->Marka_car, S2->Marka_car);
    strcpy(S1->Model_car, S2->Model_car);
    S1->Date_year = S2->Date_year;
    S1->Price = S2->Price;
}

// Обмен структуры
void Swap_Vehicles(Vehicles* S1, Vehicles* S2)
{
    Vehicles* tmp = (Vehicles*)calloc(2, sizeof(Vehicles));

    Copy_Vehicles(tmp, S1);
    Copy_Vehicles(S1, S2);
    Copy_Vehicles(S2, tmp);

    free(tmp);
}

// Заполнение структуры случайными числами
void Vehicles_Fill_Random_DateYear_Price(Vehicles* S)
{
    // Для запуска новой последовательности случайных чисел
    //srand((unsigned)time(NULL));
    // MIN + (double)(rand()) / ((double)(RAND_MAX / (MAX - (MIN))));
    // min + (rand() % ((max - min) + 1))
    //S->Date_year = 1890 + (rand() % 2020);

    S->Date_year = 1890 + (rand() % (2020 - 1890) + 1);
    S->Price = 10000 + (double)(rand()) / ((double)(RAND_MAX / (30000 - (10000))));
    //S->Date_year = ( 2020 *rand() / RAND_MAX ) +1900 ; // случайная дата 1900 - 2020
    //S->Price = ( 10000000 *rand() / RAND_MAX ) +100000 ; // случайные цены  1 000 000 - 100 000
}

// Нахождение максимального значения и его номер
int find_x_max_st(Array_Dinamical* arr, int size)
{
    // По умолчанию стоит 0, если не найдено минимального значения
    int x_max = 0;

    for (int i = 1; i < size - 1; i++)
    {
        if (arr->A[i - 1] < arr->A[i])
            if (arr->A[i] < arr->A[i + 1])
                x_max = i;
            else
                break;
    }

    return x_max;
}

// Нахождение минимального значения и его номер
int find_x_min_st(Array_Dinamical* arr, int size)
{
    // По умолчанию стоит 0, если не найдено минимального значения
    int x_min = 0;

    for (int i = 1; i < size - 1; i++)
    {
        if (arr->A[i - 1] > arr->A[i])
            if (arr->A[i] > arr->A[i + 1])
                x_min = i;
            else
                break;
    }

    return x_min;
}

// Первая буква в слове
char word_st(Vehicles* Car)
{
    char word = Car->Marka_car[0];
    return word;
}

// Сортировка структура по алфавиту по методу пузырьки (УБЫВАНИЕ)
void sorting_bubble_st_alphafit(Vehicles* Cars, int size)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size - 1; j++)
            if (word_st(&Cars[j]) < word_st(&Cars[j + 1]))
                Swap_Vehicles(&Cars[j], &Cars[j + 1]);
}

// Обмен значениями переменной
// Существует аналог swap в LAB_05_support.cpp
//void swap(double* a, double* b)
//{
//    double tmp;
//    tmp = *a;
//    *a = *b;
//    *b = tmp;
//}

// Сортировка массива по методу пузырьки (УБЫВАНИЕ)
void sorting_bubble_st_arr_double(Array_Dinamical* arr, int size)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size - 1; j++)
            if (arr->A[j] < arr->A[j + 1])
                swap(&arr->A[j], &arr->A[j + 1]);
}

// Функция создания динамического массива и заполнение его
void create_dinamical_arr(double*& arr, int size)
{
    free(arr);

    // Max = 50.00; Min = 10.00;
    for (int i = 0; i < size; i++)
    {
        arr[i] = 10 + (double)(rand()) / ((double)(RAND_MAX / (50 - (10))));
    }
}

// Функция создания динамического массива и заполнение его (БЕЗ ОСВОБОЖДЕНИИ ПАМЯТИ)
void create_dinamical_arr_no_free(double*& arr, int size)
{
    // Max = 50.00; Min = 10.00;
    for (int i = 0; i < size; i++)
    {
        arr[i] = 10 + (double)(rand()) / ((double)(RAND_MAX / (50 - (10))));
    }
}

// Функция удаления динамического массива
void FreeStruct(Array_Dinamical* arr)
{
    free(arr);
}

// Присваивание и копирование для динамической структуры через квалицифированную ссылку:
void Vehicles_Fill_Dinamical(Vehicles_Dinamical* S)
{
    char* tmp = (char*)calloc(strlen("BMW"), sizeof(char));
    //S->Marka_car = calloc(strlen("BMW"), sizeof(char));

    strcpy(S->Marka_car, "BMW");
    strcpy(S->Model_car, "BMW 3");
    strcpy(S->Corpuse, "Седан");
    S->Date_year = 2012;
    S->Price = 1200000;
}

// Создание динамической строки и заполнение их значение случайными символами
Array_Dinamical create_dinamical_arr_string(Array_Dinamical* arr, int size_struct, int size_array)
{

    Array_Dinamical* p_arr = arr;

    Array_Dinamical* p_str = p_arr;

    // Создаем динамическую структуру
    p_arr = (Array_Dinamical*)calloc(size_struct, sizeof(Array_Dinamical));

    for (int i = 0; i < size_struct; i++)
    {
        // Используем указатели на номер структуры для удобста выделении памяти
        p_str = &p_arr[i];
        // Создаем динамический массив
        // size_array -> количество слов, sizeof(char) в слово хранится 1 байт, т.е 1 буква
        // sizeof(char) * 100 = в слово хранится 100 байтов, т.е 100 букв
        p_str->S = (char*)calloc(size_array, sizeof(char) * 100);

        printf("Структура [ %d ]:\n\n", i + 1);

        for (int j = 0; j < size_array; j++)
        {
            // Слово с длиной 100 байтов (100 букв), включая нулевой символ '\0'
            int size = rand() % 101;
            //size = 10;
            // Создаем переменную word с указателем на структуру с j номером массива
            // word будет словом, в котором пополняется случайная буква
            char* word = &p_str->S[j];

            // Генерация случайного набора символа
            for (int k = 0; k < size; k++)
            {
            RETURN_CHAR:;

                // Таблица символов ASCII 0 - 127
                char bukva = (char)(0 + (rand() % (127 - 0)));

                // Проверяем условие, чтобы не попались абзаец и нулевой символ, заверщающий предложение
                if ((bukva == '\n') && (bukva == '\0'))
                    goto RETURN_CHAR;

                // Добавляет буквы к слову
                word[k] = word[k] + bukva;
            }
            printf("Слова [ %d ] : %s\n", j, p_str->S);
        }
        printf("\n");
    }

    // Присваиваем все значения в основную стркутуру
    arr = p_arr;
    return *arr;
    // Освобождаем памяти все указатели структуры
    //FreeStruct(p_arr);
}

// Обмен динамической строки в стрктуре
void swap_dinamical_string(char* str0, char* str1)
{
    if (strlen(str0) > strlen(str1))
    {
        char* tmp = (char*)calloc(strlen(str0), sizeof(char));
        strcpy(tmp, str0);
        strcpy(str0, str1);
        strcpy(str1, tmp);
    }
    else
    {
        char* tmp = (char*)calloc(strlen(str1), sizeof(char));
        strcpy(tmp, str1);
        strcpy(str1, str0);
        strcpy(str0, tmp);
    }
}