#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double incr(int x, double salary)
{
	return (salary * x )/ 100;
}

int main()
{
	double old;
	int x;
	cin >> old;
	if (old >= 0 && old <= 400.00)
		x = 15;
	else if (old >= 400.01 && old <= 800.00)
		x = 12;
	else if (old >= 800.01 && old <= 1200.00)
		x = 10;
	else if (old >= 1200.01 && old <= 2000.00)
		x = 7;
	else if (old > 2000.00)
		x = 4;

	cout << fixed << setprecision(2) << "Novo salario: " << old + incr(x, old) << endl;
	cout << fixed << setprecision(2) << "Reajuste ganho: " << 0 + incr(x, old) << endl;
	cout << fixed << setprecision(2) << "Em percentual: " << x << " %" << endl;

	return 0;
}
