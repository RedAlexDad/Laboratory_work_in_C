// LAB_5.cpp

// ������������ ������ �5

// ����������� ��������� ������������� ��� �������������� �������
#define _USE_MATH_DEFINES
#pragma warning(disable : 4996)

// ����������� ������� � �������������� ����������
#include <stdio.h>
#include <process.h>
#include <stdlib.h> 
#include <math.h>
#include <locale.h>
// ����������� ���������� ��� ���������� ������� ��������� ������
#include <malloc.h>
// ����������� ���������� ��� ���������� ������� �� ��������
#include <string.h>

// ���������� ���������� �������� �����
//#include <mpir.h>

#include "header.h"

// �������� ���������
void lab_05() {
	// ����������� ����������� ���������
	//system("chcp 1251 > nul");
	setlocale(LC_ALL, "Russian");
	// ������������� ���� ����������
	int sw; // -> �� ��������������



	// ������������� ����� �������� ���� � ������� ����������
MENU:;

	// �������� ����������� �����������
	system("CLS");

	// ����� ����

	printf("����������� �������: \n\n");
	printf("  1. ������� ������, �.5.1 \n");
	printf("  2. ������� ����� 3-� �����, �.5.2\n");
	printf("  3. ������� ������  �������, �.5.3\n");
	printf("  4. ������� Swap, �.5.4\n");
	printf("  5. ������� �������� ��� ��������� �� ��������, �.5.5\n");
	printf("  6. ������� ���������� ��������, �.5.6\n");
	printf("  7. ����������� �������, �.5.7\n");

	printf("\n��������� � ��������������� ������������:\n\n");
	printf("  8. ��������� ������� �.7.1\n");
	printf("  9. ������� ���������� � ���������� ���� �.7.2\n");
	printf("  10. ������� ����������, ��������� ���� �.7.3\n");
	printf("  11. ����� ���������� ������ ������� �.7.4\n");
	printf("  12. ������� Swap ��� ����� ������ ����� �.7.5\n");
	printf("  13. ���������� ����������� ������� �.7.6\n");
	printf("  14. ������� � ���������� ������ ���������� �.7.7\n");
	printf("  15. ����������� ������� �.7.8\n");
	printf("? 16. ���������� RTL �.7.9\n");


	printf("\n0. ����� ...\n");

	printf("�������� ����� ����: ");

	//sw = getchar();
	scanf_s("%d", &sw);

	printf("\n");

	//������

	// �������������
	switch (sw)
	{

	case 1:
	{
		/*������� � �������� ������ ���������� �������� ��� ��������� �� 3-� ����������.
		������� ���������� ���������. �������� �������� �������� � ���������.
		��������� ������� �� ������.*/
		system("cls");
		printf("  1. ������� ������, �.5.1 \n");

		double imax;
		// ���������� max � ����� �����������
		// e = 2,7182818284; pi = 3,1415926535; sqrt(2) = 1,414213562;
		imax = max3(2.7182818284, 3.1415926535, 1.414213562);
		printf("�������� �� ����  = %lf \n", imax);

		printf("\n");
		system("pause");
		sw = getchar();
		goto MENU;
		break;
	}

	case 2:
	{
		/*������� � �������� ������� �������� 3-� ����������/��������� (Summa3).
		������� ���������� � ����� ������ ������� � second.cpp.
		��������� ������ ������� ������������ 3-� ���������� (���������) � ����� ��������.
		������ ������ � ���������, ��������� ������� �� ������.*/

		system("cls");
		printf("  2. ������� ����� 3-� �����, �.5.2\n");

		int A, B, C, p_summa;

		printf("������� ����� ����� ��� A = ");
		scanf_s("%d", &A);
		printf("������� ����� ����� ��� B = ");
		scanf_s("%d", &B);
		printf("������� ����� ����� ��� C = ");
		scanf_s("%d", &C);

		int sum = Summa3(&A, &B, &C, &p_summa);

		printf("����� ���� ����� = %d\n", sum);
		printf("����� ���� ����� ����� ��������� = %d\n", p_summa);

		printf("\n");
		system("pause");
		sw = getchar();
		goto MENU;
		break;
	}

	case 3:
	{
		/*������� ������� ������ ������� (PrintMas).
		������� ����������� � ������ ������ (second.cpp).
		��� ������� ����� ���������. �������� ������ �������.*/
		system("cls");
		printf("  3. ������� ������ �������, �.5.3\n");

		double Arr[] = { 2.34, 1.13, 3.76, 4.26, 57.88, 0.61, 3.787, 8.83, 1.987, 4.764 };
		Print_Mas_DOUBLE(Arr, sizeof(Arr) / sizeof(double));

		printf("\n");
		system("pause");
		sw = getchar();
		goto MENU;
		break;
	}

	case 4:
	{
		/*������� � �������� ������� ������ ������� Swap.
		������� ����������� � ������ ������ (second.cpp).
		��� ������ ��� ���� ������� � �������� ������� �� ��������.*/
		system("cls");
		printf("  4. ������� Swap, �.5.4\n");

		double k1, k2;
		printf("������� ����� �������� ��� k1 = ");
		scanf_s("%lf", &k1);
		printf("������� ����� �������� ��� k2 = ");
		scanf_s("%lf", &k2);

		printf("k1 = %0.3lf, k2 = %0.3lf \n", k1, k2);
		// ����� ������� ������ swap
		swap(&k1, &k2);
		printf("NEW\nk1= %0.3lf, k2 = %0.3lf \n", k1, k2);

		printf("\n");
		system("pause");
		sw = getchar();
		goto MENU;
		break;
	}

	case 5:
	{
		/*������� � �������� ������� ������ � ������������ ��� ������������� �������
		(float ��� int) ������������� ��� ������������ �������� ( MinMas � MaxMas)
		� ����������� ��� ������. ����� ��������� �� �������� �������� (��. �������� ����).
		������� ����������� � ������ ������ (second.cpp).
		������ �������� � ������� ������������� (10 ���������).
		������������������ ������ ��������� � ���������.
		������ � ��������� ������ ����������� � ����-��� ���������.
		������� �������� � ������ header.h, ��������� ��� ���������� #include
		� ������� ������ �������.
		����������� � � ����� �������� ����-����� �������.*/
		system("cls");
		printf("  5. ������� �������� ��� ��������� �� ��������, �.5.5\n");

		double Arr[10] = { 2.34, 1.13, 3.76, 4.26, 57.88, 0.61, 3.787, 8.83, 1.987, 2.544 };
		Print_Mas_DOUBLE(Arr, sizeof(Arr) / sizeof(double));
		printf("\n");
		Min_Mas(Arr, sizeof(Arr) / sizeof(double));

		printf("\n");
		system("pause");
		sw = getchar();
		goto MENU;
		break;
	}

	case 6:
	{
		/*
		�������� � ���� ������� ��������� ���������� ������������� ����.
		�������� ����������: ����������� ���������� (���.) � �������� (��.).
		��� ����������: �������� (��.) � ����������� (���.).
		������� ����������� � ������ ������ (second.cpp).
		������������ ������� SWAP. ��� ������� ��������� ���������.
		��� ���������� ������� ��� �������� ������������ ���� ������� ������ (PrintMas)
		����������� ������ �� � ����� ����������.
		����������� ����-����� ��������� � ��������� � �����.*/
		// �� � ��.
		system("cls");
		printf("  6. ������� ���������� ��������, �.5.6\n");

		double Arr[10] = { 2.34, 1.13, 3.76, 4.26, 57.88, 0.61, 3.787, 8.83, 1.987, 2.544 };
		int size = sizeof(Arr) / sizeof(double);
		Print_Mas_DOUBLE(Arr, sizeof(Arr) / sizeof(double));
		printf("\n");
		sorting_mas(Arr, sizeof(Arr) / sizeof(double));
		printf("\n");
		Print_Mas_DOUBLE(Arr, sizeof(Arr) / sizeof(double));

		printf("\n");
		system("pause");
		sw = getchar();
		goto MENU;
		break;
	}

	case 7:
	{
		/*������� ������� ���������� ���������� ������ ����� � ���������
		�� ������������� ������� ��������.
		� ���� ������ ������� �������� ������ ����.*/
		system("cls");
		printf("  7. ����������� �������, �.5.7\n");

		int value;

		printf("������� ����� ����� ��� ���������� ����������: ");
		scanf_s("%d", &value);

		printf("���������: %d! = %0.3lf", value, fact(value));

		printf("\n");
		system("pause");
		sw = getchar();
		goto MENU;
		break;
	}

	// ��

	case 8:
	{
		/*������� ������, ������ �������� ������������ ������ �������,
		�������� ����������  ��������� �� ����.*/
		system("cls");
		printf("  8. ��������� ������� �.7.1\n");

		int a, b;

		printf("������� ����� �������� ��� a ");
		scanf_s("%d", &a);
		printf("������� ����� �������� ��� b ");
		scanf_s("%d", &b);

		//printf("%d ^ %d + %d = %0.0lf", a, b, b, d_sum(d_pow(a, b), b));
		printf("%d ^ %d + %d = %0.0lf", a, b, b, advanced_sum_and_pow(a, b));

		printf("\n");
		system("pause");
		sw = getchar();
		goto MENU;
		break;
	}

	case 9:
	{
		/*������� ������������� ������� ������ ��������� � �������� � ��� ������.
		��� (������� ��� ��������) �������� ��������� ���������� �������*/
		system("cls");
		printf("  9. ������� ���������� � ���������� ���� �.7.2\n");
		/*
		�� ������������� ����� �� ���� ���������� x1 � x2 �������� ���������� �������

		����������: ���������� - ��� ����� �������� ������� ���������� � ������ ������� (����������� ��� ��������)
		*/
		float a, b, c, d, x1, x2;

		printf("��������� ��� ���������� ������ ����������� ���������\n");
		printf("a*x^3 + b*x^2 + c*x + d = 0\n\n");

		printf("������� � = ");
		scanf_s("%f", &a);
		printf("������� b = ");
		scanf_s("%f", &b);
		printf("������� c = ");
		scanf_s("%f", &c);
		printf("������� d = ");
		scanf_s("%f", &d);

		printf("\n");
		printf("������� ���������� x1 = ");
		scanf_s("%f", &x1);
		printf("������� ���������� x2 = ");
		scanf_s("%f", &x2);
		printf("\n");

		double d_x = x1;
		// ���, ��� ������ ���, ��� ������ ������
		double step = 0.5;
		int i = 0;
		// ������
		int size = (int)((labs(x1) + labs(x2)) / step);

		double* arr = (double*)calloc(size, sizeof(double));
		// ����������� ����
		while (d_x <= x2)
		{
			arr[i] = a * pow(d_x, 3) + b * pow(d_x, 2) + c * d_x + d;
			printf("d_x = %3.5lf	f[%d] = %3.5lf\n", d_x, i, arr[i]);

			d_x = d_x + step;
			i++;
		}

		printf("\n");

		int x_max = find_x_max(arr, size);
		int x_min = find_x_min(arr, size);

		if ((x_max == 0) && (x_min == 0))
			printf("�� ���������� ���������� �� ���� �������\n");
		else if (x_max == 0)
		{
			printf("�� ���������� ���������� ��������� �� ���� �������\n");
			printf("����� �������� f[ %d ] = %0.3lf \n", x_min - 1, arr[x_min - 1]);
		}
		else if (x_min == 0)
		{
			printf("�� ���������� ���������� �������� �� ���� �������\n");
			printf("����� ��������� f[ %d ] = %0.3lf \n", x_max - 1, arr[x_max - 1]);
		}
		else if ((x_max != 0) && (x_min != 0))
		{
			//printf("����� ��������� f[ %d ] = %0.3lf \n", x_max + 1, arr[x_max + 1]);
			//printf("����� �������� f[ %d ] = %0.3lf \n", x_min + 1, arr[x_min + 1]);
			printf("����� ��������� f[ %d ] = %0.3lf \n", x_max, arr[x_max]);
			printf("����� �������� f[ %d ] = %0.3lf \n", x_min, arr[x_min]);
		}

		printf("\n");
		system("pause");
		sw = getchar();
		goto MENU;
		break;
	}

	case 10:
	{
		/*������� ������� ���������� �������, � ������� ��� ���������� ����� ��������� ����������.*/
		system("cls");
		printf("  10. ������� ����������, ��������� ���� �.7.3\n");

		double Arr[10] = { 2.34, 1.13, 3.76, 4.26, 57.88, 0.61, 3.787, 8.83, 1.987, 2.544 };
		int size = sizeof(Arr) / sizeof(double);
		Print_Mas_DOUBLE(Arr, sizeof(Arr) / sizeof(double));
		printf("\n");

		int type;
		printf("�������� ��� ���������� �� ��������\n 1 - ������� ������\n 2 - ������� ��������\n");
		scanf_s("%d", &type);

		switch (type)
		{
		case 1:
		{
			sorting_mas(Arr, sizeof(Arr) / sizeof(double));
			break;
		}
		case 2:
		{
			sorting_bubble(Arr, sizeof(Arr) / sizeof(double));
			break;
		}
		default:
		{
			printf("�� ���������� ����� �����\n");
			break;
		}

		}
		printf("��������������� ������\n");
		Print_Mas_DOUBLE(Arr, sizeof(Arr) / sizeof(double));

		printf("\n");
		system("pause");
		sw = getchar();
		goto MENU;
		break;
	}

	case 11:
	{
		/*������� ������� ���������� ����� ���������� �������.
		��� ������� ������������ ��������� ��� ������� ������*/

		/*
		������:
		������� ���������� �� ������ 0x00007FF65D074408

		�������:

		������ �����
			second_mathric = (double**)calloc(row, sizeof(double*));
			for (int i = 0; i < col; i++)
				second_mathric[i] = (double*)calloc(col, sizeof(double));

		�� ���

			second_mathric = (double**)calloc(row, sizeof(double*));
			for (int i = 0; i < !!____ROW____!!; i++)
				second_mathric[i] = (double*)calloc(col, sizeof(double));

		�����������	���	��������	������	����	������	��������� ����������
		��������������	C6011	������������� ������� ��������� "new_mathric".

		������� �������:
		������ �����
			double** first_mathric = (double**)calloc(row, sizeof(double*));
			for (int i = 0; i < row; i++)
				first_mathric[i] = (double*)calloc(col, sizeof(double));
		�� ��� ( �++ )

		double **first_mathric = new double* [row];
		for (int i = 0; i < row; i++)
				first_mathric[i] = new double[col];
		*/

		system("cls");
		printf("  11. ����� ���������� ������ ������� �.7.4\n");

		int row, col;
		int size_matr[4];
		printf("��� ������ �������\n");
		printf("������� ����� ������: ");
		scanf_s("%d", &row);
		size_matr[0] = row;
		printf("������� ����� �������: ");
		scanf_s("%d", &col);
		size_matr[1] = col;
		printf("\n");

		double** first_mathric = (double**)calloc(row, sizeof(double*));
		for (int i = 0; i < row; i++)
			first_mathric[i] = (double*)calloc(col, sizeof(double));

		generation_matric(first_mathric, row, col);

		print_mathric(first_mathric, row, col);
		printf("\n");

		printf("��� ������ �������\n");
		printf("������� ����� ������: ");
		scanf_s("%d", &row);
		size_matr[2] = row;
		printf("������� ����� �������: ");
		scanf_s("%d", &col);
		size_matr[3] = col;
		printf("\n");

		double** second_mathric = (double**)calloc(row, sizeof(double*));
		for (int i = 0; i < row; i++)
			second_mathric[i] = (double*)calloc(col, sizeof(double));

		generation_matric(second_mathric, row, col);
		print_mathric(second_mathric, row, col);
		printf("\n");

		if ((size_matr[0] == size_matr[2]) && (size_matr[1] == size_matr[3]))
		{
			double** new_mathric = (double**)calloc(row, sizeof(double*));
			for (int i = 0; i < row; i++)
				new_mathric[i] = (double*)calloc(col, sizeof(double));

			printf("����� ���� ������\n\n");
			summa_mathric(new_mathric, first_mathric, second_mathric, row, col);
			print_mathric(new_mathric, row, col);
			delete_d_matr(new_mathric, row, col);
		}
		else
		{
			printf("������! ������� ������� ������ ���� ���������\n");
		}

		printf("\n");

		free(first_mathric);
		free(second_mathric);

		printf("\n");
		system("pause");
		sw = getchar();
		goto MENU;
		break;
	}

	case 12:
	{
		/*
		������� ������� ������ ����� ������ �����. ������ ������ ������������� ���������.
		����� ������������ ������� ���������� ������ � ������������ ������� (������).
		*/
		system("cls");
		printf("  12. ������� Swap ��� ����� ������ ����� �.7.5\n");

		char STR0[100], STR1[100];

		printf("������� ����� �����������\n");
		(void)scanf("%s", STR0);

		char* str0 = (char*)calloc(strlen(STR0), sizeof(char));
		strcpy(str0, STR0);

		printf("������� ����� ������ �����������\n");
		(void)scanf("%s", STR1);

		char* str1 = (char*)calloc(strlen(STR1), sizeof(char));
		strcpy(str1, STR1);

		printf("������ �����������:\n%s\n������ �����������:\n%s\n", str0, str1);

		printf("������ ������:\n");
		swap_different_length(str0, str1);

		printf("������ �����������:\n%s\n������ �����������:\n%s\n", str0, str1);

		//free(str0);
		//free(str1);

		printf("\n");
		system("pause");
		sw = getchar();
		goto MENU;
		break;
	}

	case 13:
	{
		//������� ������� ��� ���������� ����������� �������.
		system("cls");
		printf("  13. ���������� ����������� ������� �.7.6\n");

		char STR[100];

		printf("������� ����� �����������\n");
		(void)scanf("%s", STR);
		char* str = (char*)calloc(strlen(STR), sizeof(char));
		strcpy(str, STR);

		printf("������ �����������:\n%s\n", str);
		sorting_bubble_char(str);
		printf("������ ����������� ����� ����������:\n%s\n", str);

		printf("\n");
		system("pause");
		sw = getchar();
		goto MENU;
		break;
	}

	case 14:
	{
		/*
		������� ���������� �������� ������� � ���������� ������ ����������.
		������������������ ��� �� ������� ������������ ����������.
		*/
		system("cls");
		printf("  14. ������� � ���������� ������ ���������� �.7.7\n");

		int k1 = 0, k2 = 0, k3 = 0, k4 = 0, k5 = 0;

		printf("���������� ������� � ���������� ������ ���������� � ������� ���������\n");

		k1 = summa_p(1, 10);
		printf("k1 = %d\n", k1);
		k2 = summa_p(2, 7, 3);
		printf("k2 = %d\n", k2);
		k3 = summa_p(5, 2, 5, 7, 6, 5);
		printf("k3 = %d\n", k3);
		k4 = summa_p(7, 1, 1, 1, 3, 4, 7, 8);
		printf("k4 = %d\n", k4);
		k5 = summa_p(11, 9, 8, 7, 5, 4, 3, 2, 1, 0, -1, -2);
		printf("k5 = %d\n", k5);

		printf("���������� ������� � ���������� ������ ���������� � ������� ���������� <stdarg.h>\n");
		k1 = 0, k2 = 0, k3 = 0, k4 = 0, k5 = 0;

		k1 = summa(1, 10);
		printf("k1 = %d\n", k1);
		k2 = summa(2, 7, 3);
		printf("k2 = %d\n", k2);
		k3 = summa(5, 2, 5, 7, 6, 5);
		printf("k3 = %d\n", k3);
		k4 = summa(7, 1, 1, 1, 3, 4, 7, 8);
		printf("k4 = %d\n", k4);
		k5 = summa(11, 9, 8, 7, 5, 4, 3, 2, 1, 0, -1, -2);
		printf("k5 = %d\n", k5);


		printf("\n");
		system("pause");
		sw = getchar();
		goto MENU;
		break;
	}

	case 15:
	{
		/*
		������� ������� ���������� ���������� ������ ����� � ���������
		�� ������������� ������� ��������.
		�������������� ����� ������������ �������� ��������
		��������� � �������� ��� ���� ���������.
		� ���� ������ ������� �������� ������ ����.
		*/

		system("cls");
		printf("  15. ����������� ������� �.7.8\n");

		int value, f;

		printf("������� ����� ����� ��� ���������� ����������\n");
		scanf_s("%d", &value);

		f = fact(value);
		if (f == 0)
			printf("������! ������������� ����� �� ������ ����!\n");
		else
			printf("���������:	%d! = %d\n\n", value, f);

		printf("\n");
		system("pause");
		sw = getchar();
		goto MENU;
		break;
	}

	case 16:
	{

		system("cls");
		printf("???  -16. ���������� RTL �.7.9\n");


		printf("\n");
		system("pause");
		sw = getchar();
		goto MENU;
		break;
	}

	case 0:
	{
		printf("����� � ���������\n\n");

		// ����� ����� ������ ����� �� ���������
		exit(0);
	}

	default:
	{
		printf("������ ������ �� �������. ������� � ����\n");

		// ����� ����������� ��� ������� ENTER
		sw = getchar();

		system("pause");
		goto MENU;
		break;
	}
	}

	system("PAUSE");
}

