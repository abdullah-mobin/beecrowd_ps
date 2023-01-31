#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int a, x = 0;
	cin >> a;
	int arr[a];
	for (int i = 0; i < a; i++)
		cin >> arr[i];
	int pt = arr[0];
	for (int i = 0; i < a; i++)
	{
		++x;
		if (arr[i] < pt)
		{
			cout << x << endl;
			return 0;
		}
		else
			pt = arr[i];
	}
	if (x == a)
	{
		cout << 0 << endl;
	}

	return 0;
}
