#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a = 4, b = 8, e = 1e-4, x;
	while (abs(a - b) > 2 * e)
	{
		x = (a + b) / 2;
		if ((pow(x, 2) - 4) * (pow(a, 2) - 4) <= 0) { b = x; }
		else { a = x; }
	}
	cout << x;
}