#include <iostream>
    using namespace std;
    int main()
    {
        setlocale(LC_CTYPE, "Russian");
        float x, y, q, sum = 0, i;
        const int n = 6;
        for (i = 0; i < n; i++)
        {
            cout << "¬ведите переменную х: ";
            cin >> x;
            cout << "¬ведите переменную y: ";
            cin >> y;
            sum = sum + (x * y);
        }
        cout << "ќтвет:" << sum << endl;
    }

    