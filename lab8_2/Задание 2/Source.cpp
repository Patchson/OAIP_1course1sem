#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	float x, a, i, sum = 0, y1, y2, y3, L ;
		for ( i = 0; i < 5; i++)
		{
			cout << "������� X: ";
			cin >> x;
			sum = sum + x ;
		}
		cout << "������� A ������: ";
		cin >> a;
		y1 = sum + a;
		cout << "������� A ������: ";
		cin >> a;
		y2 = sum + a;
		cout << "������� A ������: ";
		cin >> a;
		y3 = sum + a;
		if (y1 > y2)
			if (y1 > y3)
				L = y1;
			else
				L = y3;
		else 
			if (y2 > y3)
				L = y2;
			else
				L = y3;
	cout << "�����: " << L << endl;
}
