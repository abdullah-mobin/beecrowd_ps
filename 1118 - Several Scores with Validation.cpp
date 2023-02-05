#include <iostream>
#include <iomanip>
using namespace std;

int again(int x)
{
	if (x == 2)
	{
		return 0;
	}
	else if (x == 1)
	{
		return 1;
	}
	else
	{
		cout << "novo calculo (1-sim 2-nao)" << endl;
		cin >> x;
		again(x);
	}
}

int main()
{
abar:
	int x, avg_count = 0;
	double a;
	double sum = 0.0;
	while (cin >> a)
	{

		if (a >= 0 && a <= 10)
		{
			sum = sum + a;
			avg_count++;
		}
		else
		{
			cout << "nota invalida" << endl;
		}

		if (avg_count == 2)
		{
			break;
		}
	}
	cout << "media = " << fixed << setprecision(2) << sum / avg_count << endl;
	cout << "novo calculo (1-sim 2-nao)" << endl;

	cin >> x;
	int sdghszfg = again(x);
	if (sdghszfg == 1)
	{
		goto abar;
	}
	else
		return 0;
}