// LAB_5.cpp

// Лабораторная работа №5

// Подключение директивы препроцессора для математических решений
#define _USE_MATH_DEFINES
#pragma warning(disable : 4996)

// Подключение базовые и математические библиотеки
#include <stdio.h>
#include <process.h>
#include <stdlib.h> 
#include <math.h>
#include <locale.h>
// Подключение библиотеки для выполнения функции выделения памяти
#include <malloc.h>
// Подключение библиотеки для выполнения функции со строками
#include <string.h>

// Вычисление факториала большого числа
//#include <mpir.h>

#include "header.h"

// Основная программа
void lab_05() {
	// Подключение русификации программы
	//system("chcp 1251 > nul");
	setlocale(LC_ALL, "Russian");
	// Устанавливаем типы переменных
	int sw; // -> дл переключателей



	// Устанавливаем точку возврата меню с потерей результата
MENU:;

	// Очистика предыдующих результатов
	system("CLS");

	// Вывод меню

	printf("Контрольные задания: \n\n");
	printf("  1. Создать макрос, п.5.1 \n");
	printf("  2. Функция суммы 3-х чисел, п.5.2\n");
	printf("  3. Функция печати  массива, п.5.3\n");
	printf("  4. Функция Swap, п.5.4\n");
	printf("  5. Функция минимума или максимума по варианту, п.5.5\n");
	printf("  6. Функция сортировки убывание, п.5.6\n");
	printf("  7. Рекурсивная функция, п.5.7\n");

	printf("\nПрограмма с дополнительными требованиями:\n\n");
	printf("  8. Вложенные макросы п.7.1\n");
	printf("  9. Функция экстремума с параметром типа п.7.2\n");
	printf("  10. Функция сортировки, настройка типа п.7.3\n");
	printf("  11. Сумма двумерного целого массива п.7.4\n");
	printf("  12. Функция Swap для строк разной длины п.7.5\n");
	printf("  13. Сортировка символьного массива п.7.6\n");
	printf("  14. Функция с переменным числом параметров п.7.7\n");
	printf("  15. Рекурсивная функция п.7.8\n");
	printf("? 16. Библиотеки RTL п.7.9\n");


	printf("\n0. Выход ...\n");

	printf("Выберете пункт меню: ");

	//sw = getchar();
	scanf_s("%d", &sw);

	printf("\n");

	//Начало

	// Переключатель
	switch (sw)
	{

	case 1:
	{
		/*Создать и отладить макрос вычисления минимума или максимума их 3-х переменных.
		Задание уточняется вариантом. Исходные значения задаются в программе.
		Результат вывести на печать.*/
		system("cls");
		printf("  1. Создать макрос, п.5.1 \n");

		double imax;
		// Макровызов max с тремя переменными
		// e = 2,7182818284; pi = 3,1415926535; sqrt(2) = 1,414213562;
		imax = max3(2.7182818284, 3.1415926535, 1.414213562);
		printf("Максимум из трех  = %lf \n", imax);

		printf("\n");
		system("pause");
		sw = getchar();
		goto MENU;
		break;
	}

	case 2:
	{
		/*Создать и отладить функцию сложения 3-х переменных/выражений (Summa3).
		Функцию разместить в новом модуле проекта – second.cpp.
		Результат работы функции возвращается 3-м параметром (указатель) и самой функцией.
		Данные заданы в программе, результат вывести на печать.*/

		system("cls");
		printf("  2. Функция суммы 3-х чисел, п.5.2\n");

		int A, B, C, p_summa;

		printf("Введите любое число для A = ");
		scanf_s("%d", &A);
		printf("Введите любое число для B = ");
		scanf_s("%d", &B);
		printf("Введите любое число для C = ");
		scanf_s("%d", &C);

		int sum = Summa3(&A, &B, &C, &p_summa);

		printf("Сумма трех чисел = %d\n", sum);
		printf("Сумма трех чисел через указатели = %d\n", p_summa);

		printf("\n");
		system("pause");
		sw = getchar();
		goto MENU;
		break;
	}

	case 3:
	{
		/*Создать функцию печати массива (PrintMas).
		Функция описывается в другом модуле (second.cpp).
		Тип массива задан вариантом. Оформить печать красиво.*/
		system("cls");
		printf("  3. Функция печати массива, п.5.3\n");

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
		/*Создать и отладить функцию обмена данными Swap.
		Функция описывается в другом модуле (second.cpp).
		Тип данных для этой функции и название зависит от варианта.*/
		system("cls");
		printf("  4. Функция Swap, п.5.4\n");

		double k1, k2;
		printf("Введите любое значение для k1 = ");
		scanf_s("%lf", &k1);
		printf("Введите любое значение для k2 = ");
		scanf_s("%lf", &k2);

		printf("k1 = %0.3lf, k2 = %0.3lf \n", k1, k2);
		// Вызов функции обмена swap
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
		/*Создать и отладить функцию поиска в вещественном или целочисленном массиве
		(float или int) максимального или минимального значения ( MinMas и MaxMas)
		и запоминание его номера. Выбор алгоритма по варианту студента (см. варианты ниже).
		Функция описывается в другом модуле (second.cpp).
		Массив задается с помощью инициализации (10 элементов).
		Продемонстрировать работу алгоритма в отладчике.
		Массив и результат поиска распечатать в глав-ной программе.
		Функцию оформить в модуле header.h, подключив его директивой #include
		в главный модуль проекта.
		Разработать и в отчет включить блок-схему функции.*/
		system("cls");
		printf("  5. Функция минимума или максимума по варианту, п.5.5\n");

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
		Оформить в виде функции алгоритмы сортировки рассмотренные выше.
		Варианты сортировки: пузырьковая сортировка (пуз.) и минимакс (мм.).
		Вид сортировки: убывание (уб.) и возрастание (воз.).
		Функция описывается в другом модуле (second.cpp).
		Использовать функцию SWAP. Тип массива определен вариантом.
		Для распечатки массива при проверке использовать свою функцию печати (PrintMas)
		Распечатать массив до и после сортировки.
		Разработать блок-схему программы и поместить в отчет.*/
		// Мм – уб.
		system("cls");
		printf("  6. Функция сортировки убывание, п.5.6\n");

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
		/*Создать функцию вычисления факториала целого числа с контролем
		на отрицательный входной параметр.
		В этом случае вывести значение равное нулю.*/
		system("cls");
		printf("  7. Рекурсивная функция, п.5.7\n");

		int value;

		printf("Введите любое число для вычисления факториала: ");
		scanf_s("%d", &value);

		printf("Факториал: %d! = %0.3lf", value, fact(value));

		printf("\n");
		system("pause");
		sw = getchar();
		goto MENU;
		break;
	}

	// ДТ

	case 8:
	{
		/*Создать макрос, внутри которого используются другие макросы,
		например вычисление  максимума из двух.*/
		system("cls");
		printf("  8. Вложенные макросы п.7.1\n");

		int a, b;

		printf("Введите любое значение для a ");
		scanf_s("%d", &a);
		printf("Введите любое значение для b ");
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
		/*Создать универсальную функцию поиска максимума и минимума и его номера.
		Тип (минимум или максимум) задается отдельным параметром функции*/
		system("cls");
		printf("  9. Функция экстремума с параметром типа п.7.2\n");
		/*
		по итерационному циклу за счет промежуток x1 и x2 выявляем экстремумы функции

		Примечание: экстремумы - это когда значение функции изменяется в другую сторону (возрастания или убывания)
		*/
		float a, b, c, d, x1, x2;

		printf("Программа для вычисления корней кубического уравнения\n");
		printf("a*x^3 + b*x^2 + c*x + d = 0\n\n");

		printf("Введите а = ");
		scanf_s("%f", &a);
		printf("Введите b = ");
		scanf_s("%f", &b);
		printf("Введите c = ");
		scanf_s("%f", &c);
		printf("Введите d = ");
		scanf_s("%f", &d);

		printf("\n");
		printf("Укажите промежуток x1 = ");
		scanf_s("%f", &x1);
		printf("Укажите промежуток x2 = ");
		scanf_s("%f", &x2);
		printf("\n");

		double d_x = x1;
		// Шаг, чем меньше шаг, тем точнее отсчет
		double step = 0.5;
		int i = 0;
		// Размер
		int size = (int)((labs(x1) + labs(x2)) / step);

		double* arr = (double*)calloc(size, sizeof(double));
		// Итерационый цикл
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
			printf("Не существуют экстремумы на этой отрезке\n");
		else if (x_max == 0)
		{
			printf("Не существуют экстремума максимума на этой отрезке\n");
			printf("Точка минимума f[ %d ] = %0.3lf \n", x_min - 1, arr[x_min - 1]);
		}
		else if (x_min == 0)
		{
			printf("Не существуют экстремума минимума на этой отрезке\n");
			printf("Точка максимума f[ %d ] = %0.3lf \n", x_max - 1, arr[x_max - 1]);
		}
		else if ((x_max != 0) && (x_min != 0))
		{
			//printf("Точка максимума f[ %d ] = %0.3lf \n", x_max + 1, arr[x_max + 1]);
			//printf("Точка минимума f[ %d ] = %0.3lf \n", x_min + 1, arr[x_min + 1]);
			printf("Точка максимума f[ %d ] = %0.3lf \n", x_max, arr[x_max]);
			printf("Точка минимума f[ %d ] = %0.3lf \n", x_min, arr[x_min]);
		}

		printf("\n");
		system("pause");
		sw = getchar();
		goto MENU;
		break;
	}

	case 10:
	{
		/*Создать функцию сортировки массива, в которой тип сортировки задан отдельным параметром.*/
		system("cls");
		printf("  10. Функция сортировки, настройка типа п.7.3\n");

		double Arr[10] = { 2.34, 1.13, 3.76, 4.26, 57.88, 0.61, 3.787, 8.83, 1.987, 2.544 };
		int size = sizeof(Arr) / sizeof(double);
		Print_Mas_DOUBLE(Arr, sizeof(Arr) / sizeof(double));
		printf("\n");

		int type;
		printf("Выберите тип сортировки по убыванию\n 1 - Методом выбора\n 2 - Методом пузырьки\n");
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
			printf("Не существует такой пункт\n");
			break;
		}

		}
		printf("Отсортированный массив\n");
		Print_Mas_DOUBLE(Arr, sizeof(Arr) / sizeof(double));

		printf("\n");
		system("pause");
		sw = getchar();
		goto MENU;
		break;
	}

	case 11:
	{
		/*Создать функцию вычисление суммы двумерного массива.
		Тип массива определяется вариантом для функции печати*/

		/*
		ОШИБКА:
		Вызвано исключение по адресу 0x00007FF65D074408

		РЕШЕНИЕ:

		ВМЕСТО ЭТОГО
			second_mathric = (double**)calloc(row, sizeof(double*));
			for (int i = 0; i < col; i++)
				second_mathric[i] = (double*)calloc(col, sizeof(double));

		НА ЭТО

			second_mathric = (double**)calloc(row, sizeof(double*));
			for (int i = 0; i < !!____ROW____!!; i++)
				second_mathric[i] = (double*)calloc(col, sizeof(double));

		Серьезность	Код	Описание	Проект	Файл	Строка	Состояние подавления
		Предупреждение	C6011	Разыменование пустого указателя "new_mathric".

		Решение проблем:
		ВМЕСТО ЭТОГО
			double** first_mathric = (double**)calloc(row, sizeof(double*));
			for (int i = 0; i < row; i++)
				first_mathric[i] = (double*)calloc(col, sizeof(double));
		НА ЭТО ( С++ )

		double **first_mathric = new double* [row];
		for (int i = 0; i < row; i++)
				first_mathric[i] = new double[col];
		*/

		system("cls");
		printf("  11. Сумма двумерного целого массива п.7.4\n");

		int row, col;
		int size_matr[4];
		printf("Для первой матрицы\n");
		printf("Введите длину строки: ");
		scanf_s("%d", &row);
		size_matr[0] = row;
		printf("Введите длину столбцы: ");
		scanf_s("%d", &col);
		size_matr[1] = col;
		printf("\n");

		double** first_mathric = (double**)calloc(row, sizeof(double*));
		for (int i = 0; i < row; i++)
			first_mathric[i] = (double*)calloc(col, sizeof(double));

		generation_matric(first_mathric, row, col);

		print_mathric(first_mathric, row, col);
		printf("\n");

		printf("Для второй матрицы\n");
		printf("Введите длину строки: ");
		scanf_s("%d", &row);
		size_matr[2] = row;
		printf("Введите длину столбцы: ");
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

			printf("Сумма двух матриц\n\n");
			summa_mathric(new_mathric, first_mathric, second_mathric, row, col);
			print_mathric(new_mathric, row, col);
			delete_d_matr(new_mathric, row, col);
		}
		else
		{
			printf("Ошибка! Размеры матрицы должны быть одинаковы\n");
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
		Создать функцию обмена строк разной длины. Строки заданы динамическими массивами.
		Нужно использовать функции библиотеки работы с динамической памятью (“кучей”).
		*/
		system("cls");
		printf("  12. Функция Swap для строк разной длины п.7.5\n");

		char STR0[100], STR1[100];

		printf("Введите любое предложение\n");
		(void)scanf("%s", STR0);

		char* str0 = (char*)calloc(strlen(STR0), sizeof(char));
		strcpy(str0, STR0);

		printf("Введите любое второе предложение\n");
		(void)scanf("%s", STR1);

		char* str1 = (char*)calloc(strlen(STR1), sizeof(char));
		strcpy(str1, STR1);

		printf("Первое предложение:\n%s\nВторое предложение:\n%s\n", str0, str1);

		printf("Замена строка:\n");
		swap_different_length(str0, str1);

		printf("Первое предложение:\n%s\nВторое предложение:\n%s\n", str0, str1);

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
		//Создать функцию для сортировки символьного массива.
		system("cls");
		printf("  13. Сортировка символьного массива п.7.6\n");

		char STR[100];

		printf("Введите любое предложение\n");
		(void)scanf("%s", STR);
		char* str = (char*)calloc(strlen(STR), sizeof(char));
		strcpy(str, STR);

		printf("Первое предложение:\n%s\n", str);
		sorting_bubble_char(str);
		printf("Первое предложение после сортировки:\n%s\n", str);

		printf("\n");
		system("pause");
		sw = getchar();
		goto MENU;
		break;
	}

	case 14:
	{
		/*
		Изучить технологию создания функций с переменным числом параметров.
		Продемонстрировать это на функции суммирования переменных.
		*/
		system("cls");
		printf("  14. Функция с переменным числом параметров п.7.7\n");

		int k1 = 0, k2 = 0, k3 = 0, k4 = 0, k5 = 0;

		printf("Используем функцию с переменным числом параметров с помощью указатели\n");

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

		printf("Используем функцию с переменным числом параметров с помощью библиотеки <stdarg.h>\n");
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
		Создать функцию вычисления факториала целого числа с контролем
		на отрицательный входной параметр.
		Контролировать также максимальное значение входного
		параметра и выдавать при этом сообщение.
		В этом случае вывести значение равное нулю.
		*/

		system("cls");
		printf("  15. Рекурсивная функция п.7.8\n");

		int value, f;

		printf("Введите любое число для вычисления факториала\n");
		scanf_s("%d", &value);

		f = fact(value);
		if (f == 0)
			printf("Ошибка! Отрицательные числа не должны быть!\n");
		else
			printf("Факториал:	%d! = %d\n\n", value, f);

		printf("\n");
		system("pause");
		sw = getchar();
		goto MENU;
		break;
	}

	case 16:
	{

		system("cls");
		printf("???  -16. Библиотеки RTL п.7.9\n");


		printf("\n");
		system("pause");
		sw = getchar();
		goto MENU;
		break;
	}

	case 0:
	{
		printf("Выход с программы\n\n");

		// После этого пункта выход из программы
		exit(0);
	}

	default:
	{
		printf("Данный символ не опознан. Возврат в меню\n");

		// Сброс буферизации при нажатии ENTER
		sw = getchar();

		system("pause");
		goto MENU;
		break;
	}
	}

	system("PAUSE");
}

