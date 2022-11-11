#include <iostream>
#include <iomanip>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	float N, K, S;
	cout << "¬ведите количество школьников: ";
	cin >> N;
	cout << "Ўкольников: " << N << endl;
	cout << "¬ведите количество €блок: ";
	cin >> K;
	cout << "яблок: " << K << endl;
	S = K / N;
	std::cout << "S=" << S;
}
