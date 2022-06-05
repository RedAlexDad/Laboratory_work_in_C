// ����������� ������� � �������������� ����������
#include <stdio.h>
#include <process.h>
#include <stdlib.h> 
#include <math.h>
// ����������� ���������� ��� ���������� ������� �� ��������
#include <string.h>
//#include "header.h"
#pragma warning(disable : 4996)

/*��������������, ����������� � �������� ������� ������ ��������� �� ������.
� �������� ���������� �����������: �������� ������, ��������� ������, ����� ��������.
������������� ������� ������� � 3-�� � 4-�� �����������
(��������� ������ ��������� ���������).
������������� ������ �������� ������� ����������.
������������������ �� ������������� � ��������� �������.
������� ������� � ��������� ������������ ����� � ������������
�������� � �������� ���������.*/
void SubString(char* string, char* inital_string, int* count_string)
{
	char MAX_STRING[100] = "";
	/*
	char* strncat(char* destptr, char* srcptr, size_t num);
	���������:
	destptr
	��������� �� ������ ����������, ������� ����� ��������� ��������� ������������ �����, ������� ������ ���������� ������.
	srcptr
	C�����, �� ������� ����� ������������ ������ num �������� ��� ������������.
	num
	������������ ���������� �������� ��� ������������.
	*/

	strncat(inital_string, string, 1);

	*count_string = strlen(string);

}

void SwapString(char* string_1, char* string_2)
{
	int size;
	strlen(string_1) > strlen(string_2) ? size = strlen(string_1) : size = strlen(string_2);

	// ������� ������������ ������ ��� ��������� ������������� ������� ������
	char* tmp = (char*)calloc(size, sizeof(char));

	strcpy(tmp, string_1);
	strcpy(string_1, string_2);
	strcpy(string_2, tmp);
}

void SwapString_Alphafit(char* string)
{
	int size = strlen(string);

	// ������� ������������ ������
	//char* tmp = (char*)calloc(size, sizeof(char));
	char tmp;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (string[j] > string[j + 1])
			{
				tmp = string[j];
				string[j] = string[j + 1];
				string[j + 1] = tmp;
			}
		}
	}
}

void string_sorting_and_swap(char* S1, char* S2)
{
	char TempStr[20];
	strcpy(TempStr, S1);
	strcpy(S1, S2);
	strcpy(S2, TempStr);
}

void minimum_strlen(char** S, int* MIN_NUM, char* MIN_STR)
{
	for (int i = 0; i < strlen(S[i]); i++)
	{
		*MIN_NUM = strlen(&S[i][0]);
		// ���������� ����������� ����� ������
		//minimum_strlen(&pStrArray[i][0], &MIN_NUM, MIN_STR);
		for (int j = 1; j < *MIN_NUM; j++)
			if (strlen(&S[j][0]) < *MIN_NUM)
			{
				*MIN_NUM = strlen(&S[j][0]);
				strcpy(MIN_STR, &S[j][0]);
			}
	}
}

void string_strtok(char* string)
{
	// ��������� �� ������ ��������
	char* token;
	//  ���������� ����������� �����������: (������, �������, ��������� � // ����� ������)
	char seps[] = " ,\t\n";

	// ��������� ������ ���������:
	token = strtok(string, seps);

	// �������� ������� ����� ��������
	while (token != NULL)
	{
		//  ����� �������� � �����
		printf(" %s\n", token);
		// ����� ��������� : 
		token = strtok(NULL, seps);
	}
}

void check_strncmp(char** pStrArray, int size)
{
	int length, IF;
	printf("������� ����� ����� �����������: ");
	scanf_s("%d", &length);
	printf("\n");

	for (int j = 0; j < size - j; j++)
	{
		for (int i = 0; i < size - 1; i++)
		{
			IF = strncmp(&pStrArray[j][0], &pStrArray[i + 1][0], length);

			if (IF == 0)
				printf("������ ���������\n%s = %s\n", &pStrArray[j][0], &pStrArray[i + 1][0]);
			else
				printf("������ �� ���������\n%s != %s\n", &pStrArray[j][0], &pStrArray[i + 1][0]);
		}
		printf("\n");
	}

}

void DSwapString(char** pStrArray, int size_array_string)
{
	char tmp[100];

	for (int i = 0; i < size_array_string - 1; i++)
	{
		for (int j = 0; j < size_array_string - 1; j++)
		{
			if (strcmp(&pStrArray[j][0], &pStrArray[j + 1][0]) > 0)
			{
				strcpy(tmp, &pStrArray[j][0]);
				strcpy(&pStrArray[j][0], &pStrArray[j + 1][0]);
				strcpy(&pStrArray[j + 1][0], tmp);
				//printf("���� i = %d; j = %d\n�%d �����: %s\n", i, j, i, &pStrArray[j][0]);
			}
		}
		//printf("\n");
	}
}