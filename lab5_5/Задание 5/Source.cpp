#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a, s;
	cout << "������� ����������� �����: ";
	cin >> a;
	s = a / 100 + a % 10 + (a % 100) / 10;
	if (s % 3 == 0) {
		cout << "����� ������� �� 3";
	}
	else {
		cout << "����� �� ������� �� 3";
	}
}