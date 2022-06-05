#pragma warning(disable : 4996)

// ����������� ������� ����������
#include <stdio.h>
#include <math.h>
#include <process.h>
#include <stdlib.h> 
//#include <iostream>
#include <cstdio>
// ����������� ���������� ��� ���������� ������� ��������� ������
#include <malloc.h>
// ����������� ���������� ��� ���������� ������� �� ��������
#include <string.h>

#include "header.h"

// ������ �� ����� ���������
void Print_Vehicles(Vehicles S)
{
    printf("�����: %25s \n", S.Marka_car);
    printf("������: %24s\n", S.Model_car);
    printf("��� ������: %20s \n", S.Corpuse);
    printf("��� �������: %16d �.\n", S.Date_year);
    printf("���������: %14.3lf ������\n", S.Price);
    printf("\n");
}

// ������ �� ����� ��������� ����� ���������
void Print_Vehicles_Pointer(Vehicles* S)
{
    printf("�����: %25s \n", S->Marka_car);
    printf("������: %24s\n", S->Model_car);
    printf("��� ������: %20s \n", S->Corpuse);
    printf("��� �������: %16d �.\n", S->Date_year);
    printf("���������: %14.3lf ������\n", S->Price);
    printf("\n");
}

// ������������ � ����������� ����� ����������������� ������:
void Vehicles_Fill(Vehicles* S)
{
    strcpy(S->Marka_car, "BMW");
    strcpy(S->Model_car, "BMW 3");
    strcpy(S->Corpuse, "�����");
    S->Date_year = 2012;
    S->Price = 1200000;
}

// ���������� ��������� ����� ����������� ����
void Vehicles_Input(Vehicles* S)
{
    /*
        ������: �6031 ������������ �������� ��������� "scanf"
        ��� ������� ��� �������� �����:

        (void)scanf("%s", <string>);

    */
    char MARKA[100], MODEL[100], CORPUSE[100];
    int DATE;
    double PRICE;
    // ������������ � �����������:
    printf("����� ������: ");
    (void)scanf("%s", MARKA);
    MARKA[strlen(MARKA)] = '\0';
    strcpy(S->Marka_car, MARKA);
    printf("������ ������: ");
    (void)scanf("%s", MODEL);
    MODEL[strlen(MODEL)] = '\0';
    strcpy(S->Model_car, MODEL);
    printf("��� ������: ");
    (void)scanf("%s", CORPUSE);
    CORPUSE[strlen(CORPUSE)] = '\0';
    strcpy(S->Corpuse, CORPUSE);
    printf("���� �������: ");
    scanf_s("%d", &DATE);
    S->Date_year = DATE;
    printf("���������: ");
    scanf_s("%lf", &PRICE);
    S->Price = PRICE;
    printf("\n");
}

void Structure_Vehicles_Input_FGETS(Vehicles* S)
{
    /*
    ������: �6031 ������������ �������� ��������� "scanf"
    ��� ������� ��� �������� �����:

    char * fgets( char * string, int num, FILE * filestream );
    ���������:
        string
        ��������� �� ������ ���� char, � ������� ����������� ��������� �������.
        num
        ������������ ���������� �������� ��� ������, ������� ������� ������.
        filestream
        ��������� �� ������ ���� FILE, ������� �������������� �����, �� �������� ����������� �������.

    ��� ������ �� ������������ �����, stdin ����� ���� ����������� � �������� ����� ���������.

    ������� ������ ������������� ����������� � ������ str ����� ����������� ��������, ����� ��������������� � ����� ������.
    */
    char MARKA[100], MODEL[100], CORPUSE[100];
    int DATE, PRICE;
    // ������������ � �����������:
    printf("����� ������: ");
    fgets(MARKA, 100, stdin);
    strcpy(S->Marka_car, MARKA);
    printf("������ ������: ");
    fgets(MODEL, 100, stdin);
    strcpy(S->Model_car, MODEL);
    printf("��� ������: ");
    fgets(CORPUSE, 100, stdin);
    strcpy(S->Corpuse, CORPUSE);
    printf("���� �������: ");
    scanf_s("%d", &DATE);
    S->Date_year = DATE;
    printf("���������: ");
    scanf_s("%d", &PRICE);
    S->Price = PRICE;
    printf("\n");

}

// ����������� ���������
void Copy_Vehicles(Vehicles* S1, Vehicles* S2)
{
    strcpy(S1->Corpuse, S2->Corpuse);
    strcpy(S1->Marka_car, S2->Marka_car);
    strcpy(S1->Model_car, S2->Model_car);
    S1->Date_year = S2->Date_year;
    S1->Price = S2->Price;
}

// ����� ���������
void Swap_Vehicles(Vehicles* S1, Vehicles* S2)
{
    Vehicles* tmp = (Vehicles*)calloc(2, sizeof(Vehicles));

    Copy_Vehicles(tmp, S1);
    Copy_Vehicles(S1, S2);
    Copy_Vehicles(S2, tmp);

    free(tmp);
}

// ���������� ��������� ���������� �������
void Vehicles_Fill_Random_DateYear_Price(Vehicles* S)
{
    // ��� ������� ����� ������������������ ��������� �����
    //srand((unsigned)time(NULL));
    // MIN + (double)(rand()) / ((double)(RAND_MAX / (MAX - (MIN))));
    // min + (rand() % ((max - min) + 1))
    //S->Date_year = 1890 + (rand() % 2020);

    S->Date_year = 1890 + (rand() % (2020 - 1890) + 1);
    S->Price = 10000 + (double)(rand()) / ((double)(RAND_MAX / (30000 - (10000))));
    //S->Date_year = ( 2020 *rand() / RAND_MAX ) +1900 ; // ��������� ���� 1900 - 2020
    //S->Price = ( 10000000 *rand() / RAND_MAX ) +100000 ; // ��������� ����  1 000 000 - 100 000
}

// ���������� ������������� �������� � ��� �����
int find_x_max_st(Array_Dinamical* arr, int size)
{
    // �� ��������� ����� 0, ���� �� ������� ������������ ��������
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

// ���������� ������������ �������� � ��� �����
int find_x_min_st(Array_Dinamical* arr, int size)
{
    // �� ��������� ����� 0, ���� �� ������� ������������ ��������
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

// ������ ����� � �����
char word_st(Vehicles* Car)
{
    char word = Car->Marka_car[0];
    return word;
}

// ���������� ��������� �� �������� �� ������ �������� (��������)
void sorting_bubble_st_alphafit(Vehicles* Cars, int size)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size - 1; j++)
            if (word_st(&Cars[j]) < word_st(&Cars[j + 1]))
                Swap_Vehicles(&Cars[j], &Cars[j + 1]);
}

// ����� ���������� ����������
// ���������� ������ swap � LAB_05_support.cpp
//void swap(double* a, double* b)
//{
//    double tmp;
//    tmp = *a;
//    *a = *b;
//    *b = tmp;
//}

// ���������� ������� �� ������ �������� (��������)
void sorting_bubble_st_arr_double(Array_Dinamical* arr, int size)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size - 1; j++)
            if (arr->A[j] < arr->A[j + 1])
                swap(&arr->A[j], &arr->A[j + 1]);
}

// ������� �������� ������������� ������� � ���������� ���
void create_dinamical_arr(double*& arr, int size)
{
    free(arr);

    // Max = 50.00; Min = 10.00;
    for (int i = 0; i < size; i++)
    {
        arr[i] = 10 + (double)(rand()) / ((double)(RAND_MAX / (50 - (10))));
    }
}

// ������� �������� ������������� ������� � ���������� ��� (��� ������������ ������)
void create_dinamical_arr_no_free(double*& arr, int size)
{
    // Max = 50.00; Min = 10.00;
    for (int i = 0; i < size; i++)
    {
        arr[i] = 10 + (double)(rand()) / ((double)(RAND_MAX / (50 - (10))));
    }
}

// ������� �������� ������������� �������
void FreeStruct(Array_Dinamical* arr)
{
    free(arr);
}

// ������������ � ����������� ��� ������������ ��������� ����� ����������������� ������:
void Vehicles_Fill_Dinamical(Vehicles_Dinamical* S)
{
    char* tmp = (char*)calloc(strlen("BMW"), sizeof(char));
    //S->Marka_car = calloc(strlen("BMW"), sizeof(char));

    strcpy(S->Marka_car, "BMW");
    strcpy(S->Model_car, "BMW 3");
    strcpy(S->Corpuse, "�����");
    S->Date_year = 2012;
    S->Price = 1200000;
}

// �������� ������������ ������ � ���������� �� �������� ���������� ���������
Array_Dinamical create_dinamical_arr_string(Array_Dinamical* arr, int size_struct, int size_array)
{

    Array_Dinamical* p_arr = arr;

    Array_Dinamical* p_str = p_arr;

    // ������� ������������ ���������
    p_arr = (Array_Dinamical*)calloc(size_struct, sizeof(Array_Dinamical));

    for (int i = 0; i < size_struct; i++)
    {
        // ���������� ��������� �� ����� ��������� ��� ������� ��������� ������
        p_str = &p_arr[i];
        // ������� ������������ ������
        // size_array -> ���������� ����, sizeof(char) � ����� �������� 1 ����, �.� 1 �����
        // sizeof(char) * 100 = � ����� �������� 100 ������, �.� 100 ����
        p_str->S = (char*)calloc(size_array, sizeof(char) * 100);

        printf("��������� [ %d ]:\n\n", i + 1);

        for (int j = 0; j < size_array; j++)
        {
            // ����� � ������ 100 ������ (100 ����), ������� ������� ������ '\0'
            int size = rand() % 101;
            //size = 10;
            // ������� ���������� word � ���������� �� ��������� � j ������� �������
            // word ����� ������, � ������� ����������� ��������� �����
            char* word = &p_str->S[j];

            // ��������� ���������� ������ �������
            for (int k = 0; k < size; k++)
            {
            RETURN_CHAR:;

                // ������� �������� ASCII 0 - 127
                char bukva = (char)(0 + (rand() % (127 - 0)));

                // ��������� �������, ����� �� �������� ������ � ������� ������, ����������� �����������
                if ((bukva == '\n') && (bukva == '\0'))
                    goto RETURN_CHAR;

                // ��������� ����� � �����
                word[k] = word[k] + bukva;
            }
            printf("����� [ %d ] : %s\n", j, p_str->S);
        }
        printf("\n");
    }

    // ����������� ��� �������� � �������� ���������
    arr = p_arr;
    return *arr;
    // ����������� ������ ��� ��������� ���������
    //FreeStruct(p_arr);
}

// ����� ������������ ������ � ��������
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