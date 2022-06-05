// ����������� ������� � �������������� ����������
#include <stdio.h>
#include <process.h>
#include <stdlib.h> 
#include <math.h>
// ����������� ���������� ��� ���������� ������� �� ��������
#include <string.h>
#include <time.h>
//#include <iostream>

#include <stdarg.h>

using namespace std;

#pragma warning(disable : 4996)

// ��������� �������

// ����� ���� ����������
int Summa3(int* A, int* B, int* C, int* p_summa)
{
	*p_summa = *A + *B + *C;
	return *A + *B + *C;
}

// ������ ������� ������������� ����
void Print_Mas_DOUBLE(double* Arr, int size)
{
	for (int i = 0; i < size; i++)
		printf("[ %d ] : %0.3lf\n", i, Arr[i]);
}

// ����� ���������� ����������
void swap(double* a, double* b)
{
	double tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

// ����������� �������� �������
void Min_Mas(double* Arr, int size)
{
	int min = 0;

	for (int i = 1; i < size; i++)
		if (Arr[i] < Arr[min])
			min = i;

	printf("����������� ��������: Arr [%d] : %0.3lf\n", min, Arr[min]);
}

// ���������� ������� �� ������ ������
void sorting_mas(double* Arr, int size)
{
	// ���������� �����
	int count = 0;

	// ���������� ������ ������� ������� (����� ����������, �� ��� ����� ������������ � ���� �������, ����� �� �� ���� ���������) 
	for (int i = 0; i < size - 1; i++)
	{
		// �������� � ����, ��� ���������� ������� - ��� ������ ������� (������ 0)
		int small_index = i;

		// ���� ������� �������� � ��������� ����� �������
		for (int j = i + 1; j < size; j++)
		{
			if (Arr[j] > Arr[small_index])
				small_index = j;
		}
		// ����� ������� ��� ������ ��������
		swap(&Arr[i], &Arr[small_index]);
		count++;
	}
	//printf("count = %d\n", count);
}

// ����������� ������� ����������
long double fact(int n)
{
	long double rez;

	if (n < 0)
		return rez = 0;

	if (n == 0)
		return rez = 1;
	else
		return rez = n * fact(n - 1);
};

// ���������� ������������� �������� � ��� �����
int find_x_max(double* arr, int size)
{
	// �� ��������� ����� 0, ���� �� ������� ������������ ��������
	int x_max = 0;

	for (int i = 1; i < size - 1; i++)
	{
		if (arr[i - 1] < arr[i])
			if (arr[i] < arr[i + 1])
				x_max = i;
			else
				break;
	}

	return x_max + 1;
}

// ���������� ������������ �������� � ��� �����
int find_x_min(double* arr, int size)
{
	// �� ��������� ����� 0, ���� �� ������� ������������ ��������
	int x_min = 0;

	for (int i = 1; i < size - 1; i++)
	{
		if (arr[i - 1] > arr[i])
			if (arr[i] > arr[i + 1])
				x_min = i;
			else
				break;
	}

	return x_min + 1;
}

// ���������� ������� �� ������ ��������
void sorting_bubble(double* Arr, int size)
{
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 9; j++)
			if (Arr[j] > Arr[j + 1])
				swap(&Arr[j], &Arr[j + 1]);
}

// ������ �������
void print_mathric(double** Mathric, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			printf("Mathric [ %d ] [ %d ] = %0.3lf\n", i, j, Mathric[i][j]);
		printf("\n");
	}
}

// ��������� �������
void generation_matric(double** Mathric, int row, int col)
{
	// NULL = 0, NULL ����������� 0
	srand(time(NULL));
	srand(rand());
	//srand(time(NULL));

	// ���������� �� -9 �� 9
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			Mathric[i][j] = -10 + (double)(rand()) / ((double)(RAND_MAX / (10 - (-10))));
			//Mathric[i][j] = (double)((rand())%100);
			//rand()/(RAND_MAX+1)*(max-min)+min
		}
	}
}

// ����������� ������ ������������ �������
void delete_d_matr(double** matr, int row, int col)
{
	for (int i = 0; i < row; i++)
		delete[] matr[i];
	//delete[] matr;
}

// ����� �������
void summa_mathric(double** New_Mathric, double** First_Mathric, double** Second_Mathric, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			New_Mathric[i][j] = First_Mathric[i][j] + Second_Mathric[i][j];
		}
	}
}

// ����� ������ ������ ������
void swap_different_length(char* str0, char* str1)
{
	int size;
	if (strlen(str0) > strlen(str1))
		size = strlen(str0);
	else
		size = strlen(str1);

	char* tmp = (char*)calloc(size, sizeof(char*));

	strcpy(tmp, str0);
	strcpy(str0, str1);
	strcpy(str1, tmp);

	free(tmp);
}

// ����� �������
void swap_str(char* str0, char* str1)
{
	char tmp;

	tmp = *str0;
	*str0 = *str1;
	*str1 = tmp;
}

// ���������� ����������� ������� ���������
void sorting_bubble_char(char* str)
{
	int size = strlen(str);

	for (int i = 0; i < size - 1; i++)
		for (int j = 0; j < size - 1; j++)
			if (str[j] > str[j + 1])
				swap_str(&str[j], &str[j + 1]);
}

// ������� � ����������� �����������

/* num - ���������� ����������
   value - �������� ����������

   ������:
   � ��������� ����� - summa_p(num, value_0, value_1, value_2, value_3)
   � �����, ������������ ������� (������������)
   summa_p(int num, int value, ...)
   �����:
   ���������� ���������� ������ ���� �������� ������� 4, �.� ���������� value ���������� 4
*/

/*
�������! � ���� � ��� ��������� �����������:
��� ����� �� �� �� ����� ������� ������� � ���������� ������ ���������� ����������
�� �������� ���� � �������� ��� ������?� ��� ���� �� ������� ��� ��� � ��� ����!!

�������! ����������, ����� �� � ������� � ���������� ������ ���������� ������������ ���� �� ���������
��� �������� ������������ ��������������� ��������� (� ��� �n�).
�.�. � ����� ������� ��������� ����� ������ ����������!
*/
int summa_p(int num, ...)
{
	// ������� ��������� ���������� ��� ���������� ����
	int summa = 0;

	// ������������� ���������
	int* p_num = &num + 2;

	for (int i = 0; i < num; i++)
	{
		summa = summa + *p_num;
		p_num = p_num + 2;
	}

	return summa;
}
/*
int summa_p(int num, int value, ...)
{
	// ������� ��������� ���������� ��� ���������� ����
	int summa = 0;

	// ������������� ���������
	//value = *(&num + 2);
	int* p_num = &num + 2;
	// int = 4 ���� = 0x000004;

	for (int i = 0; i < num; i++)
	{
		// �������� �������� �������� ��������� ���� int
		//summa = summa + *(0x000004 + &num);
		//summa = summa + num;
		//num = *(&num + 0x000004);

		summa = summa + *p_num;
		p_num = p_num + 2;
		//summa = summa + value;
		//value = *(&value + 2);
	}

	return summa;
}
*/


int summa(int n, ...)
{
	/*���� � ��������� ���������� ����� ����� ����� ������ � ������� ��������� ����� typedef.
	�� ����� ���� ����� �� ��������� ����� ��� ������, � ������������ ����� ��� ������������� ����.
	�� ��������� ��������� �������� �������-����������� ��������.
	������������, ��� ����������� ��� �������� �� ������ ���������,
	- ��� �������� �������� typedef. �� ����� ����� ������ ��������������� ���,
	�������� ��������� �������������� ����� ����������� ����� ������.

	��� ��� � ��� ����� ������������ ��� ������, � ��� - ��� ����� ��� ��� ������� ����. ����� ��� ������������ � ���������� � ������������� ����� ����, � �� �������� ���. ��������, ����� ������� ����� ��� ��� float, ���������

	typedef float balance;

	������ �������� �������� ����������� � ������������� ������������� balance ��� ������� ����� ��� float. ����� ����� ������� ������������ ����������, ��������� balance:

	balance past_due;
	*/
	// ����� ������� ���������� ���������� <stdarg.h>
	// ����� ���������� ������������, ������� ��������� ������������ 
	// ������ ���������� � ��������������� �����������
	// ������������: va_list, va_start, va_end;

	int summa = 0;
	// va_list ��������� � ������ ���� ��� ���������.
	va_list factor;         //��������� va_list
	// ������������� ���������
	// va_start(factor, n) <=> int *factor = &n;
	va_start(factor, n);

	for (int i = 0; i < n; i++)
	{
		// �������� �������� �������� ��������� ���� int
		summa = summa + va_arg(factor, int);
		// va_arg - ���������� ��������� va_list �� ��������� ��������
	}

	// ��������� ��������� ����������
	va_end(factor);

	return summa;
}
