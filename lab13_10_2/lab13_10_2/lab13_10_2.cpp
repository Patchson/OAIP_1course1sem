#include <iostream>
#include <cstring>
using namespace std;
void main()
{
	char s[100];
	int a[100],k=0,p;
	gets_s(s);
	cin >> p;
	for (int i=0;i<strlen(s);i++)
		if (s[i]==' ') 
		{
			a[k] = i;
			k++;
		}
	a[k] = strlen(s) - 1;
	k++;
	for (int i=0;i<k;i++)
		if (a[i] == p) 
		{ 
			for (int j = 0; j < p; j++) { cout << s[j]; }
			cout << endl;
			for (int j = p + 1; j < strlen(s); j++) { cout << s[j]; }
			break;
		}
		else if (a[i]<p && a[i+1]>p) 
		{
			for (int j = 0; j < a[i]; j++) { cout << s[j]; }
			cout << endl;
			for (int j = a[i] + 1; j < strlen(s); j++) { cout << s[j]; }
			break;
		}
		else if (i == k - 1) {
			cout << "____________________" << endl;
			for (int j =0; j < strlen(s); j++) { cout << s[j]; }
		
		}


}