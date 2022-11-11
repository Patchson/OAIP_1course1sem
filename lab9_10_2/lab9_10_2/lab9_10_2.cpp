#include <iostream>
#include <cmath>
using namespace std;
void main()
{
    float  n = 200, b = 8, a = 0, i = 1, s1 = 0, s2 = 0, h = 0, x = 0, z = 0;
    h = (b - a) / (2 * n);
    x = a + 2 * h;
    while (i < n)
    {
        s2 = s2 + (pow(x, 2) - 4);
        x = x + h;
        s1 = s1 + (pow(x, 2) - 4);
        x = x + h;
        i++;
    }
    z = h / 3 * ((pow(a, 2) - 4) + 4 * (pow(a + h, 2) - 4) + 4 * s1 + 2 * s2 + (pow(b, 2) - 4));
    cout << z << endl;
}