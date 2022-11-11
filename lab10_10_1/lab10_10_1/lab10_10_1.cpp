//#include <iostream>
//#include <ctime>
//void main() 
//{
//	setlocale(LC_CTYPE, "Russian");
//	using namespace std;
//	const int N = 100;
//	int i, sz, A[N], rmn = 0, rmx = 99, K = 0;
//	cout << "Введите размер массива";
//	cin >> sz;
//	cout << "Массив А:" << endl;
//	srand((unsigned)time(NULL));
//	for (i = 0; i < sz; i++)
//	{
//		A[i] = (int)(((double)rand() /
//		(double)RAND_MAX) * (rmx - rmn) + rmn);
//		cout << A[i] << endl;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		K = A[i] + K;
//	}
//	cout <<"Сумма элементов массива: "<< K;
//}

//#include <iostream>
//using namespace std;
//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	int i, k, size = 4, L = 0;
//	float massivA[] = { 5, -4, 17.1, 9, 1 };
//	for (i = 0; i < size; i++)
//	{
//		L = L + massivA[i];
//	}
//	L = L / 5;
//	cout << "Среднее значение элементов массива: " << L;
//	cout << "Введите номер элемента (от 0 до 4)";
//	cin >> k;
//	for (i = k; i <= size; i++)
//		massivA[i] = massivA[i + 1];
//	size--;
//	for (i = 0; i <= size; i++)
//		cout << massivA[i] << endl;
//}

#include <iostream>
#include <locale>
void main()
{
	setlocale(LC_ALL, "rus");
	using namespace std;
	const int maxSize = 99;
	int k, i, j, kmid = 100;
	int a[maxSize];
	cout << "Введите размер массива(<99)" << endl;
	cin >> k;
	if (k > 99)
		return;
	srand((unsigned)time(NULL));
	cout << "Массив: ";
	for (i = 0; i < k; i++)
	{
		a[i] = rand() % 99;
		cout << a[i] << " ";
	}
	cout << endl;
	int mid = (a[k - 1]+ a[k - 2] + a[k - 3]) / 3;
	cout << "mid: " << mid << endl;
	for (i = 0; i < k ; i++)
		if (a[i] == mid)
		{
			kmid = a[i];
		}
	if (kmid != 100)
	{
		cout << "Подходящее число: " << kmid << endl;
	}
	else
	{
		cout << "Подходящего числа в массиве нету";
	}
	std::cout << "Уникальные числа: " << std::endl;
	for (i = 0; i < k; ++i)
	{
		for (j = i + 1; j < k; ++j)
			if (a[i] == a[j])
				break;
		if (j == k)
			std::cout << a[i] << ' ';
	}
}