// main.cpp

/*
����� ����������� �������� �� ����� �, ���������� �� ����� ����� ��������
2 ����� 3 ��������. ����� ��������� �������� 7 ������������ �����.
����� ��������� ��������� ��������� ���������, ������ � ���������, 
�� ��������, � ������, �� �����������.
*/

// ��� ����������� setlocale � �� ������ ���
#include <iostream>
#include "header.h"

using namespace std;

// �������� ���������
void main(void) {
	system("chcp 1251 > nul");
	cout << "�������� ������������ �����" << endl;
	
	cout << "�1. ������������ ������ �1. ����������." << endl;
	cout << "�2. ������������ ������ �2. ������ � �������." << endl;
	cout << "�3. ������������ ������ �3. ������ � ���������. ������������ ����." << endl;
	cout << "�4. ������������ ������ �4. Char, const char." << endl;
	cout << "�5. ������������ ������ �5. �������, ������� � ����������� �����������." << endl;
	cout << "�6. ������������ ������ �6. ���������." << endl;
	cout << "�7. ������������ ������ �7. ��������� � ����." << endl;

	cout << "�0. ����� � ���������" << endl;

	int sw;
	cout << "������� ����� �����: ";
	cin >> sw;

	
	switch (sw)
	{
	case 1: 
	{
		system("cls");
		cin.ignore();
		cout << "�1. ������������ ������ �1. ����������." << endl;
		lab_01();
		break;
	}
	case 2: 
	{
		system("cls");
		cin.ignore();
		cout << "�2. ������������ ������ �2. ������ � �������." << endl;
		lab_02();
		break;
	}
	case 3: 
	{
		system("cls");
		cin.ignore();
		cout << "�3. ������������ ������ �3. ������ � ���������. ������������ ����." << endl;
		lab_03();
		break;
	}
	case 4: 
	{
		system("cls");
		cin.ignore();
		cout << "�4. ������������ ������ �4. Char, const char." << endl;
		lab_04();
		break;
	}
	case 5: 
	{
		system("cls");
		cin.ignore();
		cout << "�5. ������������ ������ �5. �������, ������� � ����������� �����������." << endl;
		lab_05();
		break;
	}
	case 6: 
	{
		system("cls");
		cin.ignore();
		cout << "�6. ������������ ������ �6. ���������." << endl;
		lab_06();
		break;
	}
	case 7: 
	{
		system("cls");
		cin.ignore();
		cout << "�7. ������������ ������ �7. ��������� � ����." << endl;
		lab_07();
		break;
	}
	case 0:
	{
		cout << "����� � ���������" << endl;
		system("pause");
		exit(1);
		break;
	}
	default:
	{
		cout << "������! ��������� ����� ������ �����������! ������� � �������� ����!" << endl;
		system("pause");
		break;
	}
	}

}