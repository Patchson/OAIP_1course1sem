#include <iostream>
    using namespace std;
    int main()
    {
        setlocale(LC_CTYPE, "Russian");
        float x, y, q, sum = 0, i;
        const int n = 6;
        for (i = 0; i < n; i++)
        {
            cout << "������� ���������� �: ";
            cin >> x;
            cout << "������� ���������� y: ";
            cin >> y;
            sum = sum + (x * y);
        }
        cout << "�����:" << sum << endl;
    }

    