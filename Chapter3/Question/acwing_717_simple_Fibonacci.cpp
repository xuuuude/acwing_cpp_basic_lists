#include <iostream>
using namespace std;
int main()
{
	int i;
	int a[40];
	a[0] = 0;
	a[1] = 1;
	cout << a[0] << endl
		 << a[1] << endl;
	for (i = 2; i < 40; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
		cout << a[i] << endl;
	}

	return 0;
}
