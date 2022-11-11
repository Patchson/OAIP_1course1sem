#include <iostream>
#include <cmath>
using namespace std;
void main()
{
    float  n = 200, b = 8, a = 4, s = 0;
    float h = (b - a) / n;
    float x = a;
    while (x < (b - h))
    {
        float f = pow(x, 2) + 4;
        float fh = pow((x + h), 2) + 4;
        s = s + h * (f + fh) / 2;
        x = x + h;
    }
    cout << s << endl;
}