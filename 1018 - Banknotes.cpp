#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	int oneHunderd = a / 100;
	int b = a % 100;
	int fifty = b / 50;
	int c = b % 50;
	int twenty = c / 20;
	int d = c % 20;
	int ten = d / 10;
	int e = d % 10;
	int five = e / 5;
	int f = e % 5;
	int two = f / 2;
	int g = f % 2;
	int one = g / 1;
	cout << a << endl;
	cout << oneHunderd << " nota(s) de R$ 100,00" << endl;
	cout << fifty << " nota(s) de R$ 50,00" << endl;
	cout << twenty << " nota(s) de R$ 20,00" << endl;
	cout << ten << " nota(s) de R$ 10,00" << endl;
	cout << five << " nota(s) de R$ 5,00" << endl;
	cout << two << " nota(s) de R$ 2,00" << endl;
	cout << one << " nota(s) de R$ 1,00" << endl;

	return 0;
}