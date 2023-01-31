#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	double a, b, c, r1, r2;
	cin >> a >> b >> c;

	if (((b * b) - 4 * a * c) < 0 || a == 0)
		cout << "Impossivel calcular" << endl;
	else
	{
		cout << fixed << setprecision(5) << "R1 = " << (-b + (sqrt((b * b) - 4 * a * c))) / (2 * a) << endl;
		cout << fixed << setprecision(5) << "R2 = " << (-b - (sqrt((b * b) - 4 * a * c))) / (2 * a) << endl;
	}
	return 0;
}
