// Подключение базовые и математические библиотеки
#include <stdio.h>
#include <process.h>
#include <stdlib.h> 
#include <math.h>
// Подключение библиотеки для выполнения функции со строками
#include <string.h>
#include <time.h>
//#include <iostream>

#include <stdarg.h>

using namespace std;

#pragma warning(disable : 4996)

// Прототипы Функции

// Сумма трех переменных
int Summa3(int* A, int* B, int* C, int* p_summa)
{
	*p_summa = *A + *B + *C;
	return *A + *B + *C;
}

// Печать массива вещественного типа
void Print_Mas_DOUBLE(double* Arr, int size)
{
	for (int i = 0; i < size; i++)
		printf("[ %d ] : %0.3lf\n", i, Arr[i]);
}

// Обмен значениями переменной
void swap(double* a, double* b)
{
	double tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

// Минимальное значение массива
void Min_Mas(double* Arr, int size)
{
	int min = 0;

	for (int i = 1; i < size; i++)
		if (Arr[i] < Arr[min])
			min = i;

	printf("Минимальное значение: Arr [%d] : %0.3lf\n", min, Arr[min]);
}

// Сортировка массива по методу выбора
void sorting_mas(double* Arr, int size)
{
	// Количество замен
	int count = 0;

	// Перебираем каждый элемент массива (кроме последнего, он уже будет отсортирован к тому времени, когда мы до него доберемся) 
	for (int i = 0; i < size - 1; i++)
	{
		// Начинаем с того, что наименьший элемент - это первый элемент (индекс 0)
		int small_index = i;

		// Ищем элемент поменьше в остальной части массива
		for (int j = i + 1; j < size; j++)
		{
			if (Arr[j] > Arr[small_index])
				small_index = j;
		}
		// Вызов функции для обмена значений
		swap(&Arr[i], &Arr[small_index]);
		count++;
	}
	//printf("count = %d\n", count);
}

// Рекурсивная функция факториала
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

// Нахождение максимального значения и его номер
int find_x_max(double* arr, int size)
{
	// По умолчанию стоит 0, если не найдено минимального значения
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

// Нахождение минимального значения и его номер
int find_x_min(double* arr, int size)
{
	// По умолчанию стоит 0, если не найдено минимального значения
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

// Сортировка массива по методу пузырьки
void sorting_bubble(double* Arr, int size)
{
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 9; j++)
			if (Arr[j] > Arr[j + 1])
				swap(&Arr[j], &Arr[j + 1]);
}

// Печать матрицы
void print_mathric(double** Mathric, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			printf("Mathric [ %d ] [ %d ] = %0.3lf\n", i, j, Mathric[i][j]);
		printf("\n");
	}
}

// Генерация матрицы
void generation_matric(double** Mathric, int row, int col)
{
	// NULL = 0, NULL эквивалетно 0
	srand(time(NULL));
	srand(rand());
	//srand(time(NULL));

	// Промежуток от -9 до 9
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

// Освобождает памяти динамической матрицы
void delete_d_matr(double** matr, int row, int col)
{
	for (int i = 0; i < row; i++)
		delete[] matr[i];
	//delete[] matr;
}

// Сумма матрицы
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

// Обмен строка разной длиной
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

// Обмен символа
void swap_str(char* str0, char* str1)
{
	char tmp;

	tmp = *str0;
	*str0 = *str1;
	*str1 = tmp;
}

// Сортировка символьного массива пузырьком
void sorting_bubble_char(char* str)
{
	int size = strlen(str);

	for (int i = 0; i < size - 1; i++)
		for (int j = 0; j < size - 1; j++)
			if (str[j] > str[j + 1])
				swap_str(&str[j], &str[j + 1]);
}

// Функция с переменными прототипами

/* num - количество аргументов
   value - значение переменной

   Пример:
   В модульном файле - summa_p(num, value_0, value_1, value_2, value_3)
   В файле, содерщащимся функции (подпрограммы)
   summa_p(int num, int value, ...)
   Тогда:
   Количество аргументов должен быть передать функцию 4, т.к прототипов value составляет 4
*/

/*
Алексей! У меня к вам следующее предложение:
”Не могли ли вы на вашем примере функции с переменным числом параметров рассказать
на семинаре тему и пояснить ваш пример?” Это было бы полезно для вас и для всех!!

Алексей! Посмотрите, можно ли в функции с переменным числом параметров организовать цикл их просмотра
без передачи специального дополнительного параметра (у вас ‘n’).
Т.е. в самой функции проверить конец списка параметров!
*/
int summa_p(int num, ...)
{
	// Создаем локальную переменную для вычисления сумм
	int summa = 0;

	// устанавливаем указатель
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
	// Создаем локальную переменную для вычисления сумм
	int summa = 0;

	// устанавливаем указатель
	//value = *(&num + 2);
	int* p_num = &num + 2;
	// int = 4 байт = 0x000004;

	for (int i = 0; i < num; i++)
	{
		// получаем значение текущего параметра типа int
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
	/*Язык С позволяет определять имена новых типов данных с помощью ключевого слова typedef.
	На самом деле здесь не создается новый тип данных, а определяется новое имя существующему типу.
	Он позволяет облегчить создание машинно-независимых программ.
	Единственное, что потребуется при переходе на другую платформу,
	- это изменить оператор typedef. Он также может помочь документировать код,
	позволяя назначать содержательные имена стандартным типам данных.

	где тип — это любой существующий тип данных, а имя - это новое имя для данного типа. Новое имя определяется в дополнение к существующему имени типа, а не замещает его. Например, можно создать новое имя для float, используя

	typedef float balance;

	Данный оператор сообщает компилятору о необходимости распознавания balance как другого имени для float. Далее можно создать вещественную переменную, используя balance:

	balance past_due;
	*/
	// Нужно сначала подключать библиотеку <stdarg.h>
	// Затем используем макрокоманды, который позволяет обрабатывать 
	// списки параметров с нефиксированным количеством
	// Макрокоманды: va_list, va_start, va_end;

	int summa = 0;
	// va_list выступает в данной роли как указатель.
	va_list factor;         //указатель va_list
	// устанавливаем указатель
	// va_start(factor, n) <=> int *factor = &n;
	va_start(factor, n);

	for (int i = 0; i < n; i++)
	{
		// получаем значение текущего параметра типа int
		summa = summa + va_arg(factor, int);
		// va_arg - перемещает указатель va_list на следующий параметр
	}

	// завершаем обработку параметров
	va_end(factor);

	return summa;
}
