#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a, s;
	cout << "Введите трехзначное число: ";
	cin >> a;
	s = a / 100 + a % 10 + (a % 100) / 10;
	if (s % 3 == 0) {
		cout << "Число делится на 3";
	}
	else {
		cout << "Число не делится на 3";
	}
}