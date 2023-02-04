#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float a,  sum = 0, valid = 0;
	while (1)
	{
		if (valid == 2)
		{
			break;
		}
		cin >> a;
		if (a >= 0 && a <= 10)
		{
			valid++;
			sum = sum + a;
		}
		else
		{
			cout << "nota invalida" << endl;
		}
	}
	
	cout << fixed << setprecision(2) << "media = " << sum/2 << endl;

	return 0;
}