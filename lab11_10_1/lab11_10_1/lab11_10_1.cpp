#include <iostream> 
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A; char tmp[33];
	cout << "Введите число А: " << endl;
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << " Число А в двоичном виде: " << tmp << endl;
	A = A >> 2;
	_itoa_s(A, tmp, 2);
	cout << " Результат: " << tmp << endl << endl;
}
