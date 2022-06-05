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
// ����������� ���������� ��� �������������� ������
#include <io.h>

#include "header.h"


// ������ �� ����� ���������
//void Print_Vehicles(Vehicles S)
//{
//    printf("�����: %20s \n", S.Marka_car);
//    printf("������: %19s\n", S.Model_car);
//    printf("��� ������: %15s \n", S.Corpuse);
//    printf("��� �������: %11d �.\n", S.Date_year);
//    printf("���������: %9d ������\n", S.Price);
//    printf("\n");
//}

// ������ �� ����� ��������� ����� ���������
//void Print_Vehicles_Pointer(Vehicles* S)
//{
//    printf("�����: %20s \n", S->Marka_car);
//    printf("������: %19s\n", S->Model_car);
//    printf("��� ������: %15s \n", S->Corpuse);
//    printf("��� �������: %11d �.\n", S->Date_year);
//    printf("���������: %9d ������\n", S->Price);
//    printf("\n");
//}

// ������������ � ����������� ����� ����������������� ������:
//void Vehicles_Fill(Vehicles* S)
//{
//    strcpy(S->Marka_car, "BMW");
//    strcpy(S->Model_car, "BMW 3");
//    strcpy(S->Corpuse, "�����");
//    S->Date_year = 2012;
//    S->Price = 1200000;
//}

// ���������� ��������� ����� ����������� ����
//void Vehicles_Input(Vehicles* S)
//{
//    /*
//        ������: �6031 ������������ �������� ��������� "scanf"
//        ��� ������� ��� �������� �����:
//
//        (void)scanf("%s", <string>);
//
//    */
//    char MARKA[100], MODEL[100], CORPUSE[100];
//    int DATE, PRICE;
//    // ������������ � �����������:
//    printf("����� ������: ");
//    (void)scanf("%s", MARKA);
//    MARKA[strlen(MARKA)] = '\0';
//    strcpy(S->Marka_car, MARKA);
//    printf("������ ������: ");
//    (void)scanf("%s", MODEL);
//    MODEL[strlen(MODEL)] = '\0';
//    strcpy(S->Model_car, MODEL);
//    printf("��� ������: ");
//    (void)scanf("%s", CORPUSE);
//    CORPUSE[strlen(CORPUSE)] = '\0';
//    strcpy(S->Corpuse, CORPUSE);
//    printf("���� �������: ");
//    scanf_s("%d", &DATE);
//    S->Date_year = DATE;
//    printf("���������: ");
//    scanf_s("%d", &PRICE);
//    S->Price = PRICE;
//    printf("\n");
//}

//void Structure_Vehicles_Input_FGETS(Vehicles* S)
//{
//    /*
//    ������: �6031 ������������ �������� ��������� "scanf"
//    ��� ������� ��� �������� �����:
//
//    char * fgets( char * string, int num, FILE * filestream );
//    ���������:
//        string
//        ��������� �� ������ ���� char, � ������� ����������� ��������� �������.
//        num
//        ������������ ���������� �������� ��� ������, ������� ������� ������.
//        filestream
//        ��������� �� ������ ���� FILE, ������� �������������� �����, �� �������� ����������� �������.
//
//    ��� ������ �� ������������ �����, stdin ����� ���� ����������� � �������� ����� ���������.
//
//    ������� ������ ������������� ����������� � ������ str ����� ����������� ��������, ����� ��������������� � ����� ������.
//    */
//    char MARKA[100], MODEL[100], CORPUSE[100];
//    int DATE, PRICE;
//    // ������������ � �����������:
//    printf("����� ������: ");
//    fgets(MARKA, 100, stdin);
//    strcpy(S->Marka_car, MARKA);
//    printf("������ ������: ");
//    fgets(MODEL, 100, stdin);
//    strcpy(S->Model_car, MODEL);
//    printf("��� ������: ");
//    fgets(CORPUSE, 100, stdin);
//    strcpy(S->Corpuse, CORPUSE);
//    printf("���� �������: ");
//    scanf_s("%d", &DATE);
//    S->Date_year = DATE;
//    printf("���������: ");
//    scanf_s("%d", &PRICE);
//    S->Price = PRICE;
//    printf("\n");
//
//}

// ����������� ���������
//void Copy_Vehicles(Vehicles* S1, Vehicles* S2)
//{
//    strcpy(S1->Corpuse, S2->Corpuse);
//    strcpy(S1->Marka_car, S2->Marka_car);
//    strcpy(S1->Model_car, S2->Model_car);
//    S1->Date_year = S2->Date_year;
//    S1->Price = S2->Price;
//}

// ����� ���������
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

// ���������� ��������� ���������� �������
//void Vehicles_Fill_Random_DateYear_Price(Vehicles* S)
//{
//    // ��� ������� ����� ������������������ ��������� �����
//    //srand((unsigned)time(NULL));
//    // min + (rand() % ((max - min) + 1))
//    //S->Date_year = 1890 + (rand() % 2020);
//
//
//    S->Date_year = 1890 + (rand() % (2020 - 1890) + 1);
//    S->Price = 1000000 + (rand() % (1000000 - 100000) + 1);
//    //S->Date_year = ( 2020 *rand() / RAND_MAX ) +1900 ; // ��������� ���� 1900 - 2020
//    //S->Price = ( 10000000 *rand() / RAND_MAX ) +100000 ; // ��������� ����  1 000 000 - 100 000
//}

// ���������� ������������� �������� � ��� �����
//int find_x_max_st(Array_Dinamical* arr, int size)
//{
//    // �� ��������� ����� 0, ���� �� ������� ������������ ��������
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

// ���������� ������������ �������� � ��� �����
//int find_x_min_st(Array_Dinamical* arr, int size)
//{
//    // �� ��������� ����� 0, ���� �� ������� ������������ ��������
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

// ������ ����� � �����
//char word_st(Vehicles* Car)
//{
//    char word = Car->Marka_car[0];
//    return word;
//}

// ���������� ��������� �� �������� �� ������ �������� (��������)
//void sorting_bubble_st_alphafit(Vehicles* Cars, int size)
//{
//    for (int i = 0; i < size; i++)
//        for (int j = 0; j < size - 1; j++)
//            if (word_st(&Cars[j]) < word_st(&Cars[j + 1]))
//                Swap_Vehicles(&Cars[j], &Cars[j + 1]);
//}

// ������� ������ �����
void printf_text_from_file(const char* filename)
{
    FILE* pF;
    // ������� ����� ��� ����� �� �����
    char	buf[80];

    // ������� ��� ������ �����
    pF = fopen(filename, "r+");

    for (int i = 0; !feof(pF); i++)
    {
        // ���� ��������������� ������ - ����������� ������
        fscanf(pF, "%s", buf);
        if (!feof(pF))
            // ������ ������ �� �����
            printf("'%s'\n", buf);
    }
    fclose(pF);
    return;
};

// ������� ������ ����� ������������ ���������
void printf_text_struct_from_file(const char* filename)
{
    FILE* pF = fopen(filename, "rb");

    Vehicles Buff_Cars;

    if (pF != NULL)
        // ���� ������ � ���������� ����� ����� ��������:
        while (!feof(pF))  // �������� ����� �����
        {
            fread(&Buff_Cars, sizeof(Vehicles), 1, pF); // ������ ����� ������ �� �����
            if (!feof(pF)) // ����� �� ��������? ��� �� ��� ����� �����?
                Print_Vehicles(Buff_Cars);
        }

    fclose(pF);
}

// ������� ������ � ������ ����� ������������ ���������
void read_and_input_text_struct_into_file(const char* filename, Vehicles* Cars, int size)
{
    // �������� ����� ��� ������
    FILE* f1 = fopen(filename, "w+b");

    for (int i = 0; i < size; i++)
        // Cars + i => ������ ����� �������� (����� ������� ������) + ����� i
        // ������� fwrite ���������� ������ �������� � sizeof(Vehicles) ���������, ������ �� ������� ����� ������ ����, � ���� ������, �� ������� ��������� Cars + i � ������� ������� � ������.
        fwrite(Cars + i, sizeof(Vehicles), 1, f1);

    fclose(f1);
}

// ������� ������ ����� � ������ � ���������
void vechicles_read_file_into_struct(const char* fileName, Vehicles** p_arr, int* p_size)
{
    FILE* pF;
    // �������� ����� ��� ������
    pF = fopen(fileName, "rb");

    *p_size = _filelength(_fileno(pF)) / sizeof(Vehicles);
    Vehicles SBuf;
    // (Vehicles*) - ���������� ����. Cast ��������������, ���������
    *p_arr = (Vehicles*)calloc(*p_size, sizeof(Vehicles));
    // Vehicles => automobile

    int i = 0;
    // ������� feof ���������, ��������� �� ����� �����, ���������� � �������, ����� �������� filestream.
    while (!feof(pF))
    {
        // ������ ����� ������
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

// ������� ������ ������� ��������
void vechicles_print_array(Vehicles* p_arr, int size)
{
    for (int i = 0; i < size; i++)
        Print_Vehicles(p_arr[i]);
}

// ������� ������� ���� ����
void vehicles_merge_files(const char* unite_file, const char* file_first, const char* file_second)
{
    FILE* pF1;
    FILE* pF2;
    FILE* pFMerge;

    Vehicles V_Buf;
    int flag = 0;

    // �������� 1 ��� ������
    pF1 = fopen(file_first, "rb");
    // �������� 1 ��� ������
    pF2 = fopen(file_second, "rb");

    // "w+b"- ������� ��� ������� �������� ���� ��� ������ � ������, ��� ��������� ������ ���������� ���������. 
    // �������� 1 ��� ������
    pFMerge = fopen(unite_file, "w+b");

    // 1-� ����
    while (!feof(pF1))
    {
        // ������ ����� ������ ���� 1
        fread(&V_Buf, sizeof(Vehicles), 1, pF1);
        if (!feof(pF1))
            fwrite(&V_Buf, sizeof(Vehicles), 1, pFMerge);
    }

    // 2-� ����
    while (!feof(pF2))
    {
        // ������ ����� ������ ���� 2
        fread(&V_Buf, sizeof(Vehicles), 1, pF2);
        if (!feof(pF2))
            fwrite(&V_Buf, sizeof(Vehicles), 1, pFMerge);
    }

    fclose(pF1);
    fclose(pF2);
    fclose(pFMerge);
};



