#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int a;
	int x = 0;
	cin >> a;
	for (int i = 0; i < 1000; i++)
	{
		if (x == a)
			x = 0;
		cout << "N[" << i << "] = " << x++ << endl;
	}
	return 0;
}
