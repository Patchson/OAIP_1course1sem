#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int b, c, d;
	cout << "������ b="; cin >> b;
	cout << "������ c="; cin >> c;
	cout << "������ d="; cin >> d;
		if ((b % 2) == 0)
			cout << "���� ������ �����" << "\n";
		else
			if ((c % 2) == 0)
				cout << "���� ������ �����" << "\n";
			else
				if ((d % 2) == 0)
					cout << "���� ������ �����" <<"\n";
				else
					cout << "������ ����� ���"<<"\n";

	system("pause");
}