#pragma once

// ������������ ������ �1
void lab_01();

//===========================================================================================

// ������������ ������ �2
void lab_02();

//===========================================================================================

// ������������ ������ �3
void lab_03();

//===========================================================================================

// ������������ ������ �4

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


// ������������ ������ �5
void lab_05();

#define max3(a, b, c) ((a > b) ? ((a > c) ? a : ((b > c) ? b : c)) : ((b > c) ? b : c)) 
//#define d_sum(a, b) (a + b)
#define d_pow(a, b) (pow(a, b))
#define advanced_sum_and_pow(a, b) (d_pow(a, b) + b)

// ����� ���� ����������
int Summa3(int* A, int* B, int* C, int* p_summa);

// ������ ������� ������������� ����
void Print_Mas_DOUBLE(double* Arr, int size);

// ����� ���������� ����������
void swap(double* a, double* b);

// ����������� �������� �������
void Min_Mas(double* Arr, int size);

// ���������� ������� �� ������ ������
void sorting_mas(double* Arr, int size);

// ����������� ������� ����������
long double fact(int n);

// ���������� ������������� �������� � ��� �����
int find_x_max(double* arr, int size);

// ���������� ������������ �������� � ��� �����
int find_x_min(double* arr, int size);

// ���������� ������� �� ������ ��������
void sorting_bubble(double* Arr, int size);

// ������ �������
void print_mathric(double** Mathric, int row, int col);

// ��������� �������
void generation_matric(double** Mathric, int row, int col);

// ����������� ������ ������������ �������
void delete_d_matr(double** matr, int row, int col);

// ����� �������
void summa_mathric(double** New_Mathric, double** First_Mathric, double** Second_Mathric, int row, int col);

// ����� ������ ������ ������
void swap_different_length(char* str0, char* str1);

// ���������� ����������� ������� ���������
void sorting_bubble_char(char* str);

// ����� �������
void swap_str(char* str0, char* str1);

// ������� � ���������� ������ ����������
int summa(int num, ...);

int summa_p(int num, ...);

//===========================================================================================

// ������������ ������ �6
void lab_06();

enum Seasons { Winter = 1, Spring, Summer, Autumn };
/*
����������:
1. ����� 				 - ������ (������ ��������)
2. ������				 - ������ (������ ��������)
3. ��� ������			 - ������ (������ ��������)
4. ��� �������			 - ������������� ���
5. ���������			 - ������������� ��� (� ������ ����������)
*/

// ��������� �� ������������ �������� 
struct Vehicles
{
    char Marka_car[20]; // ����� 
    char Model_car[30]; // ������ 
    char Corpuse[20]; //��� ������ 
    // ��� ������� ����� ������������ ������������� ��� ��� ������ �������� char arr[]...
    int Date_year; // ��� �������
    double Price; //��������� 
};

// ��������� �� ������������ ��������� 
struct Array
{
    // ������
    int A[10];
};

// ��������� �� ������������� ��������� 
struct Array_Dinamical
{
    // ����� ������� max � min
    struct INDEX
    {
        int max;
        int min;
    };
    INDEX index;
    // ������ �������
    //int SIZE;
    // ������
    //double* A = (double*)calloc(SIZE + 1, sizeof(double));
    double* A;
    char* S;
};

// ��������� �� ������������� �������� 
struct Vehicles_Dinamical
{
    char* Marka_car; // ����� 
    char* Model_car; // ������ 
    char* Corpuse; //��� ������ 

    // ��� ������� ����� ������������ ������������� ��� ��� ������ �������� char arr[]...
    int Date_year; // ��� �������
    int Price; //��������� 
};

// ������ �� ����� ���������
void Print_Vehicles(Vehicles S);

// ���������� ��������� ����� ����������������� ������
void Vehicles_Fill(Vehicles* S);

// ���������� ��������� ����������������
void Vehicles_Input(Vehicles* S);

// ������ �� ����� ��������� ����� ���������
void Print_Vehicles_Pointer(Vehicles* S);

// ����������� ���������
void Copy_Vehicles(Vehicles* S1, Vehicles* S2);

// ����� ���������
void Swap_Vehicles(Vehicles* S1, Vehicles* S2);

// ���������� ��������� ���������� �������
void Vehicles_Fill_Random_DateYear_Price(Vehicles* S);

// ���������� ������������� �������� � ��� �����
int find_x_max_st(Array_Dinamical* arr, int size);

// ���������� ������������ �������� � ��� �����
int find_x_min_st(Array_Dinamical* arr, int size);

// ���������� ��������� �� �������� �� ������ ��������
void sorting_bubble_st_alphafit(Vehicles* Cars, int size);

// ������ ����� � �����
char word_st(Vehicles* Car);

// ����� ���������� ����������
void swap(double* a, double* b);

// ���������� ������� �� ������ ��������
void sorting_bubble_st_arr_double(Array_Dinamical* arr, int size);

// ������� �������� ������������� ������� � ���������� ���
void create_dinamical_arr(double*& arr, int size);

// ������� �������� ������������� ������� � ���������� ��� (��� ������������ ������)
void create_dinamical_arr_no_free(double*& arr, int size);

// ������� �������� ������������� �������
void FreeStruct(Array_Dinamical* arr);

// ������������ � ����������� ��� ������������ ��������� ����� ����������������� ������:
void Vehicles_Fill_Dinamical(Vehicles_Dinamical* S);

// �������� ������������ ������ � ���������� �� �������� ���������� ���������
Array_Dinamical create_dinamical_arr_string(Array_Dinamical* arr, int size_string, int size_array);

// ����� ������������ ������ � ��������
void swap_dinamical_string(char* str0, char* str1);


//===========================================================================================

// ������������ ������ �7
void lab_07();

/*
����������:
1. ����� 				 - ������ (������ ��������)
2. ������				 - ������ (������ ��������)
3. ��� ������			 - ������ (������ ��������)
4. ��� �������			 - ������������� ���
5. ���������			 - ������������� ��� (� ������ ����������)
*/

// ��������� �� ������������ �������� 
//struct Vehicles
//{
//    char Marka_car[20]; // ����� 
//    char Model_car[30]; // ������ 
//    char Corpuse[20]; //��� ������ 
//    // ��� ������� ����� ������������ ������������� ��� ��� ������ �������� char arr[]...
//    int Date_year; // ��� �������
//    int Price; //��������� 
//};

// ��������� �� ������������� ��������� 
//struct Array_Dinamical
//{
//    // ����� ������� max � min
//    struct INDEX
//    {
//        int max;
//        int min;
//    };
//    INDEX index;
//    // ������ �������
//    //int SIZE;
//    // ������
//    //double* A = (double*)calloc(SIZE + 1, sizeof(double));
//    double* A;
//};

// ������ �� ����� ���������
//void Print_Vehicles(Vehicles S);

// ���������� ��������� ����� ����������������� ������
//void Vehicles_Fill(Vehicles* S);

// ���������� ��������� ����������������
//void Vehicles_Input(Vehicles* S);

// ������ �� ����� ��������� ����� ���������
//void Print_Vehicles_Pointer(Vehicles* S);

// ����������� ���������
//void Copy_Vehicles(Vehicles* S1, Vehicles* S2);

// ����� ���������
//void Swap_Vehicles(Vehicles* S1, Vehicles* S2);

// ���������� ��������� ���������� �������
//void Vehicles_Fill_Random_DateYear_Price(Vehicles* S);

// ���������� ������������� �������� � ��� �����
//int find_x_max_st(Array_Dinamical* arr, int size);

// ���������� ������������ �������� � ��� �����
//int find_x_min_st(Array_Dinamical* arr, int size);

// ���������� ��������� �� �������� �� ������ ��������
//void sorting_bubble_st_alphafit(Vehicles* Cars, int size);

// ������ ����� � �����
//char word_st(Vehicles* Car);

// ������� ������ �����
void printf_text_from_file(const char* filename);

// ������� ������ ����� ������������ ���������
void printf_text_struct_from_file(const char* filename);

// ������� ������ � ������ ����� ������������ ���������
void read_and_input_text_struct_into_file(const char* filename, Vehicles* Cars, int size);

// ������� ������ ����� � ������ � ���������
void vechicles_read_file_into_struct(const char* fileName, Vehicles** p_arr, int* p_size);

// ������� ������ ������� ��������
void vechicles_print_array(Vehicles* p_arr, int size);

// ������� ������� ���� ����
void vehicles_merge_files(const char* unite_file, const char* file_first, const char* file_second);

//===========================================================================================

