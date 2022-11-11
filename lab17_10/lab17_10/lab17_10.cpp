#include <iostream>
using namespace std;

void massiv();
void matrix();

int main() {
	setlocale(LC_ALL, "rus");
	int choice;
	cout << "Выберите вариант:" << endl;
	cout << "1) Одномерный массив" << endl;
	cout << "2) Матрица" << endl;
	cout << "3) Выход" << endl;
	cout << endl;
	cout << "Ваш вариант: ";
	cin >> choice;
	switch (choice)
	{
	case 1: massiv(); break;
	case 2: matrix(); break;
	case 3: break;
	}
}

void massiv() {
	srand((unsigned)time(NULL));
	int mas[10], result;
	cout << endl;
	cout << "Ваш массив" << endl;
	for (int i = 1; i < 10; i++)
	{
		mas[i] = rand() % 99;
		cout << "mas[" <<i << "] = " << mas[i] << endl;
	}
	for (int j = 1; j < 10; j++)
	{
		if (j % 2 != 0 && mas[j] % 2 == 0)
		{
			cout << endl;
			cout << "Номер чётного элемента: mas[" << j << "] = " << mas[j] << endl;
		}
	}
}

/*
Дана целочисленная прямоугольная матрица. Если максимальное число встречается 
в матрице более одного раза, то вывести его значение и индексы, а также количество повторений.
*/

void matrix() {
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int n = 2, m = 4;
	int B[n][m], max = 0, k = 0, l, o;
	cout << "Введите элементы массива" << endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> B[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (B[i][j] > max)
			{
				max = B[i][j];
				l = i;
				o = j;
				break;
			}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (B[i][j] == max)
			{
				k += 1;
			}
	if (k > 1)
	{
		cout << endl;
		cout << "Максимальное значение B[" << l << "," << o << "] = " << max << endl;
		cout << "Количество повторений: " << k << endl;
	}
	else
	{
		cout << endl;
		cout << "Ничего не сходится";
	}
}

