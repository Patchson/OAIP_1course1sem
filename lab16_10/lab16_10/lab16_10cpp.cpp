#include <iostream>
using namespace std;

void massiv();
void stroka();
x`
int main(void) {
	setlocale(LC_ALL, "rus");
	int c;
	cout << "Выберите задание:" << endl;
	cout << "1. Двумерный массив" << endl;
	cout << "2. Сторка" << endl;
	cout << "3. Выход" << endl;
	cin >> c;
	switch (c)
	{
	case 1: massiv(); break;
	case 2: stroka(); break;
	case 3: break;
	}
}

void massiv() {
	setlocale(LC_ALL, "rus");
	srand((unsigned)time(NULL));
	int** A;
	int n, k;
	cout << "Введите нужное число k: ";
	cin >> k;
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
			if (A[i][j] == k) cout << "Номер позиции нужного элемента элемента: A[" << i << "] [" << j << "]" << endl;
		}
	}
}

void stroka() {
	setlocale(LC_ALL, "rus");
	char s[100];
	int a[100], k = 0, p;
	gets_s(s);
	cin >> p;
	for (int i = 0; i < strlen(s); i++)
		if (s[i] == ' ')
		{
			a[k] = i;
			k++;
		}
	a[k] = strlen(s) - 1;
	k++;
	for (int i = 0; i < k; i++)
		if (a[i] == p)
		{
			for (int j = 0; j < p; j++) { cout << s[j]; }
			cout << endl;
			for (int j = p + 1; j < strlen(s); j++) { cout << s[j]; }
			break;
		}
		else if (a[i]<p && a[i + 1]>p)
		{
			for (int j = 0; j < a[i]; j++) { cout << s[j]; }
			cout << endl;
			for (int j = a[i] + 1; j < strlen(s); j++) { cout << s[j]; }
			break;
		}
		else if (i == k - 1) {
			cout << "____________________" << endl;
			for (int j = 0; j < strlen(s); j++) { cout << s[j]; }

		}
}