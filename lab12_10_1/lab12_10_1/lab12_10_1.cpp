#include <locale>
#include <iostream>
void main()
{
	setlocale(LC_ALL, "rus");
	using namespace std;
	const int maxSize = 10;
	int n = 10, i, a[maxSize], b[maxSize], min, j;
	srand((unsigned)time(NULL));
	cout << "A:" << endl;
	for (i = 0; i < n; i++) //������ ��������
	{
		*(a + i) = rand() % 99;
		cout << *(a + i) << " ";
	}
	cout << endl;
	cout << "B:" << endl;
	for (i = 0; i < n; i++) //������ ��������
	{
		*(b + i) = rand() % 99;
		cout << *(b + i) << " ";
	}
	cout << endl;
	min = a[0]; //����������� ������������ ������ �������� ������� �������
	for (i = 0; i < n; i++) {  //���� �����������
		for (j = 0; j < n; j++) {
			if (*(a + i) < min && *(a + i) != *(b + j)) {
				min = *(a + i);
			}
			else;
		}
	}
	cout << "����������� �������� - " << min << endl; //����� ������������
	system("pause");
}