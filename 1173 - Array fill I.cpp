#include <iostream>
#define size 10
using namespace std;

int main()
{
	int a, arr[size];
	cin >> a;
	for (int i = 0; i < size; i++)
	{
		arr[i] = a;
		cout << "N[" << i << "] = " << arr[i] << endl;
		a = a * 2;
	}
	return 0;
}
