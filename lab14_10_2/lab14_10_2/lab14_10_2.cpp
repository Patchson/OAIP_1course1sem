#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int n = 3, m = 4;
	int B[n][m];
	bool a = false;
	int i, j, sum = 0;
	cout << "¬ведите элементы массива" << endl;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin >> B[i][j];
	cout << " »сходный массив:" << endl;
	int nomer;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			if (B[i][j] == 0) { nomer = B[i][0]; a = true; break; }
			if (a == true) break;
	} 
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			B[i][j] -= nomer;
			cout << B[i][j] << " ";
		}
		cout << endl;
	}


}