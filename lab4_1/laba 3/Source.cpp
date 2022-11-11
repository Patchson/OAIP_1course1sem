#include <iomanip> 
#include <iostream> 
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(8) << setfill(c) << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(8) << setfill(c) << c << endl;

}
