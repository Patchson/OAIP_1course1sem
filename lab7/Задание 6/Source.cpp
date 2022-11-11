#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double a = 1, y = 0.4, t = 5e5, j, z, w;
	for (int i = 1; (i <= 5); i++) {
		cout << "¬ведите j " << endl;
		cin >> j;
		z = sqrt(t * a + y) + 4e-2 * j;
		w = log(0.4 * y) / (7 * a - z);
		cout << "z = " << z << endl;
		cout << "w = " << w << endl;

	}


}
