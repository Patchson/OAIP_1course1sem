


#include <iostream>
#include <stdio.h>
#include <ctime>
#include <cstring>

void massiv();
void stroka();

using namespace std;
int main(void)
{
	setlocale(LC_ALL, "rus");
	int c;
	do
	{
		cout << endl;
		cout << "Введите" << endl;
		cout << "1-одномерный массив" << endl;
		cout << "2-работа с матрицей" << endl;
		cout << "3-выход" << endl;
		cin >> c;
		switch (c)
		{
		case 1: massiv(); break;
		case 2: stroka(); break;
		case 3: break;
		}
	} while (c != 3);
}
void massiv()
{
	setlocale(LC_ALL, "rus");
	srand((unsigned)time(NULL));
	int** A;
	int n, max = 0, count = 0, sum = 0;
	cout << "Введите размерность массива N*M: ";
	cin >> n;
	A = new int* [n];
	int i, j;
	for (i = 0; i < n; i++)
	{
		A[i] = new int[n];
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			A[i][j] = rand() % 25;
			cout << " A[" << i << "][" << j << "]=" << A[i][j] << endl;
		}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (A[i][j] > max) max = A[i][j];
		}
	}
	cout << "Максимальный элемент массива: " << max << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (A[i][j] == max) cout << "Номер позиции максимального элемента: A[" << i << "] [" << j << "]";
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j > i) sum = sum + A[i][j];
		}
	}
	cout << "Сумма элементов под главной диагональю: " << sum;
}



void stroka()

{
	char* str = new char[264];
	int size, k;
	cout << "Enter string:" << endl;
	cin.getline(str, 264);
	size = strlen(str);
	cout << "Result:" << endl;
	for (int i = 0; i < strlen(str); i++)
	{
		cout << str[i];
		if (str[i] == 'c') {
			cout << "*";
		}

	}

	delete[] str;
}


