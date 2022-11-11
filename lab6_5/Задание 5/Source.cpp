//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	int m = 10;
//	float f = 3.2e-4, s = 7.4, k, y, v;
//	for (int i = 0; i < 3; i++) {
//		cout << "¬ведите k: ";
//		cin >> k;
//		y = s / log(5.2 * f) / (exp(-s) + 2);
//		v = (1 + m * y - m * k) / log(-y);
//		cout << y <<endl<< v << endl;
//	}
//}




//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	int m = 10;
//	double f = 3.2e-4, s = 7.4, k = 0, y, v;
//	while (k <= 4) {
//		y = s / log(5.2 * f) / (exp(-s) + 2);
//		v = (1 + m * y - m * k) / log(-y);
//		k = k + 0.5;
//		cout << y << endl << v << endl;
//	}
//}



#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double s = 7.4, m = 0.3, f = 3.2e-4, k, y, v;
	for (int i = 0; i < 3; i++) {
		m = 0.3;
		cout << "¬ведите k: ";
		cin >> k;
		while (m <= 0.7) {
			y = s / log(5.2 * f) / (exp(-s) + 2);
			v = (1 + m * y - m * k) / log(-y);
			cout << y << endl << v << endl;
			m = m + 0.1;
		}


	}
}