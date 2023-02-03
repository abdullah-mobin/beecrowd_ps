#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a, x, out = 0, in = 0;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> x;
		if (x > 20 || x < 10)
		{
			out++;
		}
		else
		{
			in++;
		}
	}
	cout << in << " in" << endl;
	cout << out << " out" << endl;

	return 0;
}