#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double a;

	cin >> a;

	if (a <= 2000.00)
	{
		cout << "Isento\n";
	}
	else if (a >= 2000.01 && a <= 3000.00)
	{
		cout << "R$ " << fixed << setprecision(2) << (a - 2000.00) * 0.08 << endl;
	}
	else if (a >= 3000.01 && a <= 4500.00)
	{
		cout << "R$ " << fixed << setprecision(2) << ((a - 3000.00) * 0.18 + 1000.00 * 0.08) << endl;
	}
	else if (a >= 4500.01)
	{
		cout << "R$ " << fixed << setprecision(2) << ((a - 4500.00) * 0.28 + 1500.00 * 0.18 + 1000.00 * 0.08) << endl;
	}

	return 0;
}
