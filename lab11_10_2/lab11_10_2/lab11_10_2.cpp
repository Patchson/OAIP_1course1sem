#include <iostream>
using namespace std;
int main() {
	unsigned a = 12345;
	char tml[33];
	_itoa_s(a, tml, 2);
	cout << tml << endl;
	_itoa_s(0, tml, 2);
	unsigned p = 10; 
	unsigned n = 2;  

	unsigned mask = (1u << n) - 1; 
	mask <<= p;                    

	a ^= mask;
	_itoa_s(a, tml, 2);
	cout << tml << endl;
}