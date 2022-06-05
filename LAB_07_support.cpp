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
// Подключение библиотеки для низкоуровенных языках
#include <io.h>

#include "header.h"


// Печать на экран структуры
//void Print_Vehicles(Vehicles S)
//{
//    printf("Марка: %20s \n", S.Marka_car);
//    printf("Модель: %19s\n", S.Model_car);
//    printf("Тип кузова: %15s \n", S.Corpuse);
//    printf("Год выпуска: %11d г.\n", S.Date_year);
//    printf("Стоимость: %9d Рублей\n", S.Price);
//    printf("\n");
//}

// Печать на экран структуры через указатели
//void Print_Vehicles_Pointer(Vehicles* S)
//{
//    printf("Марка: %20s \n", S->Marka_car);
//    printf("Модель: %19s\n", S->Model_car);
//    printf("Тип кузова: %15s \n", S->Corpuse);
//    printf("Год выпуска: %11d г.\n", S->Date_year);
//    printf("Стоимость: %9d Рублей\n", S->Price);
//    printf("\n");
//}

// Присваивание и копирование через квалицифированную ссылку:
//void Vehicles_Fill(Vehicles* S)
//{
//    strcpy(S->Marka_car, "BMW");
//    strcpy(S->Model_car, "BMW 3");
//    strcpy(S->Corpuse, "Седан");
//    S->Date_year = 2012;
//    S->Price = 1200000;
//}

// Заполнение структуру через консольного окна
//void Vehicles_Input(Vehicles* S)
//{
//    /*
//        Ошибка: С6031 Возвращаемое значение пропущено "scanf"
//        Для решение эту проблему нужно:
//
//        (void)scanf("%s", <string>);
//
//    */
//    char MARKA[100], MODEL[100], CORPUSE[100];
//    int DATE, PRICE;
//    // Присваивание и копирование:
//    printf("Марка машины: ");
//    (void)scanf("%s", MARKA);
//    MARKA[strlen(MARKA)] = '\0';
//    strcpy(S->Marka_car, MARKA);
//    printf("Модель машины: ");
//    (void)scanf("%s", MODEL);
//    MODEL[strlen(MODEL)] = '\0';
//    strcpy(S->Model_car, MODEL);
//    printf("Тип кузова: ");
//    (void)scanf("%s", CORPUSE);
//    CORPUSE[strlen(CORPUSE)] = '\0';
//    strcpy(S->Corpuse, CORPUSE);
//    printf("Дата выпуска: ");
//    scanf_s("%d", &DATE);
//    S->Date_year = DATE;
//    printf("Стоимость: ");
//    scanf_s("%d", &PRICE);
//    S->Price = PRICE;
//    printf("\n");
//}

//void Structure_Vehicles_Input_FGETS(Vehicles* S)
//{
//    /*
//    Ошибка: С6031 Возвращаемое значение пропущено "scanf"
//    Для решение эту проблему нужно:
//
//    char * fgets( char * string, int num, FILE * filestream );
//    Параметры:
//        string
//        Указатель на массив типа char, в который сохраняются считанные символы.
//        num
//        Максимальное количество символов для чтения, включая нулевой символ.
//        filestream
//        Указатель на объект типа FILE, который идентифицирует поток, из которого считываются символы.
//
//    Для чтения из стандартного ввода, stdin может быть использован в качестве этого параметра.
//
//    Нулевой символ автоматически добавляется в строку str после прочитанных символов, чтобы сигнализировать о конце строки.
//    */
//    char MARKA[100], MODEL[100], CORPUSE[100];
//    int DATE, PRICE;
//    // Присваивание и копирование:
//    printf("Марка машины: ");
//    fgets(MARKA, 100, stdin);
//    strcpy(S->Marka_car, MARKA);
//    printf("Модель машины: ");
//    fgets(MODEL, 100, stdin);
//    strcpy(S->Model_car, MODEL);
//    printf("Тип кузова: ");
//    fgets(CORPUSE, 100, stdin);
//    strcpy(S->Corpuse, CORPUSE);
//    printf("Дата выпуска: ");
//    scanf_s("%d", &DATE);
//    S->Date_year = DATE;
//    printf("Стоимость: ");
//    scanf_s("%d", &PRICE);
//    S->Price = PRICE;
//    printf("\n");
//
//}

// Копирование структуры
//void Copy_Vehicles(Vehicles* S1, Vehicles* S2)
//{
//    strcpy(S1->Corpuse, S2->Corpuse);
//    strcpy(S1->Marka_car, S2->Marka_car);
//    strcpy(S1->Model_car, S2->Model_car);
//    S1->Date_year = S2->Date_year;
//    S1->Price = S2->Price;
//}

// Обмен структуры
//void Swap_Vehicles(Vehicles* S1, Vehicles* S2)
//{
//    Vehicles* tmp = (Vehicles*)calloc(2, sizeof(Vehicles));
//
//    Copy_Vehicles(tmp, S1);
//    Copy_Vehicles(S1, S2);
//    Copy_Vehicles(S2, tmp);
//
//    free(tmp);
//}

// Заполнение структуры случайными числами
//void Vehicles_Fill_Random_DateYear_Price(Vehicles* S)
//{
//    // Для запуска новой последовательности случайных чисел
//    //srand((unsigned)time(NULL));
//    // min + (rand() % ((max - min) + 1))
//    //S->Date_year = 1890 + (rand() % 2020);
//
//
//    S->Date_year = 1890 + (rand() % (2020 - 1890) + 1);
//    S->Price = 1000000 + (rand() % (1000000 - 100000) + 1);
//    //S->Date_year = ( 2020 *rand() / RAND_MAX ) +1900 ; // случайная дата 1900 - 2020
//    //S->Price = ( 10000000 *rand() / RAND_MAX ) +100000 ; // случайные цены  1 000 000 - 100 000
//}

// Нахождение максимального значения и его номер
//int find_x_max_st(Array_Dinamical* arr, int size)
//{
//    // По умолчанию стоит 0, если не найдено минимального значения
//    int x_max = 0;
//
//    for (int i = 1; i < size - 1; i++)
//    {
//        if (arr->A[i - 1] < arr->A[i])
//            if (arr->A[i] < arr->A[i + 1])
//                x_max = i;
//            else
//                break;
//    }
//
//    return x_max;
//}

// Нахождение минимального значения и его номер
//int find_x_min_st(Array_Dinamical* arr, int size)
//{
//    // По умолчанию стоит 0, если не найдено минимального значения
//    int x_min = 0;
//
//    for (int i = 1; i < size - 1; i++)
//    {
//        if (arr->A[i - 1] > arr->A[i])
//            if (arr->A[i] > arr->A[i + 1])
//                x_min = i;
//            else
//                break;
//    }
//
//    return x_min;
//}

// Первая буква в слове
//char word_st(Vehicles* Car)
//{
//    char word = Car->Marka_car[0];
//    return word;
//}

// Сортировка структура по алфавиту по методу пузырьки (УБЫВАНИЕ)
//void sorting_bubble_st_alphafit(Vehicles* Cars, int size)
//{
//    for (int i = 0; i < size; i++)
//        for (int j = 0; j < size - 1; j++)
//            if (word_st(&Cars[j]) < word_st(&Cars[j + 1]))
//                Swap_Vehicles(&Cars[j], &Cars[j + 1]);
//}

// Функция печати файла
void printf_text_from_file(const char* filename)
{
    FILE* pF;
    // Создаем буфер для ввода из файла
    char	buf[80];

    // Функция для чтения файла
    pF = fopen(filename, "r+");

    for (int i = 0; !feof(pF); i++)
    {
        // Ввод форматированных данных - разделитель пробел
        fscanf(pF, "%s", buf);
        if (!feof(pF))
            // Печать данных из файла
            printf("'%s'\n", buf);
    }
    fclose(pF);
    return;
};

// Функция печати файла содержащиеся структуры
void printf_text_struct_from_file(const char* filename)
{
    FILE* pF = fopen(filename, "rb");

    Vehicles Buff_Cars;

    if (pF != NULL)
        // Цикл чтения и распечатки файла своих структур:
        while (!feof(pF))  // Проверка конца файла
        {
            fread(&Buff_Cars, sizeof(Vehicles), 1, pF); // Чтение одной записи из файла
            if (!feof(pF)) // Можно ли печатать? Нет ли уже конца файла?
                Print_Vehicles(Buff_Cars);
        }

    fclose(pF);
}

// Функция чтения и записи файла содержащиеся структуры
void read_and_input_text_struct_into_file(const char* filename, Vehicles* Cars, int size)
{
    // Открытие файла для записи
    FILE* f1 = fopen(filename, "w+b");

    for (int i = 0; i < size; i++)
        // Cars + i => Размер всего стуктура (адрес массива начала) + номер i
        // Функция fwrite записывает массив размером — sizeof(Vehicles) элементов, каждый из которых имеет размер байт, в блок памяти, на который указывает Cars + i — текущая позиция в потоке.
        fwrite(Cars + i, sizeof(Vehicles), 1, f1);

    fclose(f1);
}

// Функция чтения файла и запись в структуру
void vechicles_read_file_into_struct(const char* fileName, Vehicles** p_arr, int* p_size)
{
    FILE* pF;
    // Открытие файла для чтения
    pF = fopen(fileName, "rb");

    *p_size = _filelength(_fileno(pF)) / sizeof(Vehicles);
    Vehicles SBuf;
    // (Vehicles*) - приведение типа. Cast преобразование, выражение
    *p_arr = (Vehicles*)calloc(*p_size, sizeof(Vehicles));
    // Vehicles => automobile

    int i = 0;
    // Функция feof проверяет, достигнут ли конец файла, связанного с потоком, через параметр filestream.
    while (!feof(pF))
    {
        // чтение одной записи
        fread(&SBuf, sizeof(Vehicles), 1, pF);
        if (!feof(pF))
        {
            //
            memcpy(*p_arr + i, &SBuf, sizeof(Vehicles));
            i++;
        }
    }


    fclose(pF);
};

// Функция печати массива структур
void vechicles_print_array(Vehicles* p_arr, int size)
{
    for (int i = 0; i < size; i++)
        Print_Vehicles(p_arr[i]);
}

// Функция слияние двух файл
void vehicles_merge_files(const char* unite_file, const char* file_first, const char* file_second)
{
    FILE* pF1;
    FILE* pF2;
    FILE* pFMerge;

    Vehicles V_Buf;
    int flag = 0;

    // Открытие 1 для чтения
    pF1 = fopen(file_first, "rb");
    // Открытие 1 для чтения
    pF2 = fopen(file_second, "rb");

    // "w+b"- открыть или создать бинарный файл для чтения и записи, для созданных файлов содержимое очищается. 
    // Открытие 1 для записи
    pFMerge = fopen(unite_file, "w+b");

    // 1-й цикл
    while (!feof(pF1))
    {
        // чтение одной записи файл 1
        fread(&V_Buf, sizeof(Vehicles), 1, pF1);
        if (!feof(pF1))
            fwrite(&V_Buf, sizeof(Vehicles), 1, pFMerge);
    }

    // 2-й цикл
    while (!feof(pF2))
    {
        // чтение одной записи файл 2
        fread(&V_Buf, sizeof(Vehicles), 1, pF2);
        if (!feof(pF2))
            fwrite(&V_Buf, sizeof(Vehicles), 1, pFMerge);
    }

    fclose(pF1);
    fclose(pF2);
    fclose(pFMerge);
};



