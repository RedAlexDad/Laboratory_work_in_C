#pragma once

// Лабораторная работа №1
void lab_01();

//===========================================================================================

// Лабораторная работа №2
void lab_02();

//===========================================================================================

// Лабораторная работа №3
void lab_03();

//===========================================================================================

// Лабораторная работа №4

void lab_04();

void SubString(char* string, char* inital_string, int* count_string);

void SwapString(char* string_1, char* string_2);

void SwapString_Alphafit(char* string);

void string_sorting_and_swap(char* S1, char* S2);

void minimum_strlen(char** S, int* NUM, char* MIN_STR);

void string_strtok(char* string);

void check_strncmp(char** pStrArray, int size);

void DSwapString(char** pStrArray, int size_array_string);


//===========================================================================================


// Лабораторная работа №5
void lab_05();

#define max3(a, b, c) ((a > b) ? ((a > c) ? a : ((b > c) ? b : c)) : ((b > c) ? b : c)) 
//#define d_sum(a, b) (a + b)
#define d_pow(a, b) (pow(a, b))
#define advanced_sum_and_pow(a, b) (d_pow(a, b) + b)

// Сумма трех переменных
int Summa3(int* A, int* B, int* C, int* p_summa);

// Печать массива вещественного типа
void Print_Mas_DOUBLE(double* Arr, int size);

// Обмен значениями переменной
void swap(double* a, double* b);

// Минимальное значение массива
void Min_Mas(double* Arr, int size);

// Сортировка массива по методу выбора
void sorting_mas(double* Arr, int size);

// Рекурсивная функция факториала
long double fact(int n);

// Нахождение максимального значения и его номер
int find_x_max(double* arr, int size);

// Нахождение минимального значения и его номер
int find_x_min(double* arr, int size);

// Сортировка массива по методу пузырьки
void sorting_bubble(double* Arr, int size);

// Печать матрицы
void print_mathric(double** Mathric, int row, int col);

// Генерация матрицы
void generation_matric(double** Mathric, int row, int col);

// Освобождает памяти динамической матрицы
void delete_d_matr(double** matr, int row, int col);

// Сумма матрицы
void summa_mathric(double** New_Mathric, double** First_Mathric, double** Second_Mathric, int row, int col);

// Обмен строка разной длиной
void swap_different_length(char* str0, char* str1);

// Сортировка символьного массива пузырьком
void sorting_bubble_char(char* str);

// Обмен символа
void swap_str(char* str0, char* str1);

// Функция с переменным числом параметров
int summa(int num, ...);

int summa_p(int num, ...);

//===========================================================================================

// Лабораторная работа №6
void lab_06();

enum Seasons { Winter = 1, Spring, Summer, Autumn };
/*
Автомобиль:
1. Марка 				 - строка (массив символов)
2. Модель				 - строка (массив символов)
3. Тип кузова			 - строка (массив символов)
4. Год выпуска			 - целочисленный тип
5. Стоимость			 - целочисленный тип (В рублях выражается)
*/

// Структура со статическими строками 
struct Vehicles
{
    char Marka_car[20]; // Марка 
    char Model_car[30]; // Модель 
    char Corpuse[20]; //Тип кузова 
    // Год выпуска можно использовать целочисленный тип или массив символов char arr[]...
    int Date_year; // Год выпуска
    double Price; //Стоимость 
};

// Структура со статическими массивами 
struct Array
{
    // Массив
    int A[10];
};

// Структура со динамическими массивами 
struct Array_Dinamical
{
    // Номер массива max и min
    struct INDEX
    {
        int max;
        int min;
    };
    INDEX index;
    // размер массива
    //int SIZE;
    // Массив
    //double* A = (double*)calloc(SIZE + 1, sizeof(double));
    double* A;
    char* S;
};

// Структура со динамическами строками 
struct Vehicles_Dinamical
{
    char* Marka_car; // Марка 
    char* Model_car; // Модель 
    char* Corpuse; //Тип кузова 

    // Год выпуска можно использовать целочисленный тип или массив символов char arr[]...
    int Date_year; // Год выпуска
    int Price; //Стоимость 
};

// Печать на экран структуры
void Print_Vehicles(Vehicles S);

// Заполнение структуры через квалифицированных ссылок
void Vehicles_Fill(Vehicles* S);

// Заполнение структуры пользовательским
void Vehicles_Input(Vehicles* S);

// Печать на экран структуры через указатели
void Print_Vehicles_Pointer(Vehicles* S);

// Копирование структуры
void Copy_Vehicles(Vehicles* S1, Vehicles* S2);

// Обмен структуры
void Swap_Vehicles(Vehicles* S1, Vehicles* S2);

// Заполнение структуры случайными числами
void Vehicles_Fill_Random_DateYear_Price(Vehicles* S);

// Нахождение максимального значения и его номер
int find_x_max_st(Array_Dinamical* arr, int size);

// Нахождение минимального значения и его номер
int find_x_min_st(Array_Dinamical* arr, int size);

// Сортировка структура по алфавиту по методу пузырьки
void sorting_bubble_st_alphafit(Vehicles* Cars, int size);

// Первая буква в слове
char word_st(Vehicles* Car);

// Обмен значениями переменной
void swap(double* a, double* b);

// Сортировка массива по методу пузырьки
void sorting_bubble_st_arr_double(Array_Dinamical* arr, int size);

// Функция создания динамического массива и заполнение его
void create_dinamical_arr(double*& arr, int size);

// Функция создания динамического массива и заполнение его (БЕЗ ОСВОБОЖДЕНИИ ПАМЯТИ)
void create_dinamical_arr_no_free(double*& arr, int size);

// Функция удаления динамического массива
void FreeStruct(Array_Dinamical* arr);

// Присваивание и копирование для динамической структуры через квалицифированную ссылку:
void Vehicles_Fill_Dinamical(Vehicles_Dinamical* S);

// Создание динамической строки и заполнение их значение случайными символами
Array_Dinamical create_dinamical_arr_string(Array_Dinamical* arr, int size_string, int size_array);

// Обмен динамической строки в стрктуре
void swap_dinamical_string(char* str0, char* str1);


//===========================================================================================

// Лабораторная работа №7
void lab_07();

/*
Автомобиль:
1. Марка 				 - строка (массив символов)
2. Модель				 - строка (массив символов)
3. Тип кузова			 - строка (массив символов)
4. Год выпуска			 - целочисленный тип
5. Стоимость			 - целочисленный тип (В рублях выражается)
*/

// Структура со статическими строками 
//struct Vehicles
//{
//    char Marka_car[20]; // Марка 
//    char Model_car[30]; // Модель 
//    char Corpuse[20]; //Тип кузова 
//    // Год выпуска можно использовать целочисленный тип или массив символов char arr[]...
//    int Date_year; // Год выпуска
//    int Price; //Стоимость 
//};

// Структура со динамическими массивами 
//struct Array_Dinamical
//{
//    // Номер массива max и min
//    struct INDEX
//    {
//        int max;
//        int min;
//    };
//    INDEX index;
//    // размер массива
//    //int SIZE;
//    // Массив
//    //double* A = (double*)calloc(SIZE + 1, sizeof(double));
//    double* A;
//};

// Печать на экран структуры
//void Print_Vehicles(Vehicles S);

// Заполнение структуры через квалифицированных ссылок
//void Vehicles_Fill(Vehicles* S);

// Заполнение структуры пользовательским
//void Vehicles_Input(Vehicles* S);

// Печать на экран структуры через указатели
//void Print_Vehicles_Pointer(Vehicles* S);

// Копирование структуры
//void Copy_Vehicles(Vehicles* S1, Vehicles* S2);

// Обмен структуры
//void Swap_Vehicles(Vehicles* S1, Vehicles* S2);

// Заполнение структуры случайными числами
//void Vehicles_Fill_Random_DateYear_Price(Vehicles* S);

// Нахождение максимального значения и его номер
//int find_x_max_st(Array_Dinamical* arr, int size);

// Нахождение минимального значения и его номер
//int find_x_min_st(Array_Dinamical* arr, int size);

// Сортировка структура по алфавиту по методу пузырьки
//void sorting_bubble_st_alphafit(Vehicles* Cars, int size);

// Первая буква в слове
//char word_st(Vehicles* Car);

// Функция печати файла
void printf_text_from_file(const char* filename);

// Функция печати файла содержащиеся структуры
void printf_text_struct_from_file(const char* filename);

// Функция чтения и записи файла содержащиеся структуры
void read_and_input_text_struct_into_file(const char* filename, Vehicles* Cars, int size);

// Функция чтения файла и запись в структуру
void vechicles_read_file_into_struct(const char* fileName, Vehicles** p_arr, int* p_size);

// Функция печати массива структур
void vechicles_print_array(Vehicles* p_arr, int size);

// Функция слияние двух файл
void vehicles_merge_files(const char* unite_file, const char* file_first, const char* file_second);

//===========================================================================================

