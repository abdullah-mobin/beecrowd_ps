#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	int a, b, c, d;
	while (cin >> a >> b >> c >> d)
	{
		cout << fixed << setprecision(4) << (a * 1.0 * sqrt(c * c + b * b) * d) / 10000.0 << endl;
	}

	return 0;
}
