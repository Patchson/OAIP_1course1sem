#include <iostream>
void main()
{
	using namespace std;
	int Size = 5, A[]{ 3,4,5,6,7 }, B[]{ 1,2,8,9,10 }, C[]{ 0,0,0,0,0 };
	for (int i = 0; i < Size; i++)
	{
		C[i] = A[i] + B[i];
		cout << *(C + i) << endl;
	}
}
