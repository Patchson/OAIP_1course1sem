#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int x, y, z, min1, min2, min;
	cout << "Ведите z=" ; cin >> z;
	cout << "Ведите x=" ; cin >> x;
	cout << "Ведите y=" ; cin >> y;
	if (x * y * z < x + y + z) 
		min1 = x * y * z;
	else 
		min1 = x + y + z;
	if (x > y)
		if (y < z)
			min2 = y;
		else
			min2 = z;
	else
		if (x < z)
			min2 = x;
		else
			min2 = z;
	min = min1 * min2;
	cout << min << "\n";
	system("pause");
}