#include <iostream>
#include <iomanip>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	float N, K, S;
	cout << "������� ���������� ����������: ";
	cin >> N;
	cout << "����������: " << N << endl;
	cout << "������� ���������� �����: ";
	cin >> K;
	cout << "�����: " << K << endl;
	S = K / N;
	std::cout << "S=" << S;
}
