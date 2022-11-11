#include <iostream>
using namespace std;

void massiv();
void matrix();

int main() {
	setlocale(LC_ALL, "rus");
	int choice;
	cout << "�������� �������:" << endl;
	cout << "1) ���������� ������" << endl;
	cout << "2) �������" << endl;
	cout << "3) �����" << endl;
	cout << endl;
	cout << "��� �������: ";
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
	cout << "��� ������" << endl;
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
			cout << "����� ������� ��������: mas[" << j << "] = " << mas[j] << endl;
		}
	}
}

/*
���� ������������� ������������� �������. ���� ������������ ����� ����������� 
� ������� ����� ������ ����, �� ������� ��� �������� � �������, � ����� ���������� ����������.
*/

void matrix() {
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int n = 2, m = 4;
	int B[n][m], max = 0, k = 0, l, o;
	cout << "������� �������� �������" << endl;
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
		cout << "������������ �������� B[" << l << "," << o << "] = " << max << endl;
		cout << "���������� ����������: " << k << endl;
	}
	else
	{
		cout << endl;
		cout << "������ �� ��������";
	}
}

