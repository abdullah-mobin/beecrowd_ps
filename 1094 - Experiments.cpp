#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int x, c = 0, r = 0, s = 0, t = 0;
	cin >> x;
	while (x--)
	{
		int a;
		char name;
		cin >> a >> name;
		getchar();
		if (name == 'C')
		{
			c = c + a;
		}
		else if (name == 'R')
		{
			r = r + a;
		}
		else if (name == 'S')
		{
			s = s + a;
		}
		t = t + a;
	}

	cout << "Total: " << t <<" cobaias"<< endl;
	cout << "Total de coelhos: " << c << endl;
	cout << "Total de ratos: " << r << endl;
	cout << "Total de sapos: " << s << endl;
	cout << "Percentual de coelhos: " << fixed << setprecision(2) << ((double)c * 100) / t << " %" << endl;
	cout << "Percentual de ratos: " << fixed << setprecision(2) << ((double)r * 100) / t << " %" << endl;
	cout << "Percentual de sapos: " << fixed << setprecision(2) << ((double)s * 100) / t << " %" << endl;

	return 0;
}