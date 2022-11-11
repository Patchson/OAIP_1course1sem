#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int n = 2, m = 4;
	int B[n][m];
	int i, j, sum=0;
	cout << "¬ведите элементы массива" << endl;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin >> B[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (B[i][j] % 2 == 0)
			{
				sum += B[i][j];
			}
	cout << endl;
	cout << "—умма равна: " << sum << endl;
}
