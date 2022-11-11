#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int b, c, d;
	cout << "Ведите b="; cin >> b;
	cout << "Ведите c="; cin >> c;
	cout << "Ведите d="; cin >> d;
		if ((b % 2) == 0)
			cout << "есть четные числа" << "\n";
		else
			if ((c % 2) == 0)
				cout << "есть четные числа" << "\n";
			else
				if ((d % 2) == 0)
					cout << "есть четные числа" <<"\n";
				else
					cout << "чётных чисел нет"<<"\n";

	system("pause");
}