#include <iostream> 
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A; char tmp[33];
	cout << "������� ����� �: " << endl;
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << " ����� � � �������� ����: " << tmp << endl;
	A = A >> 2;
	_itoa_s(A, tmp, 2);
	cout << " ���������: " << tmp << endl << endl;
}
