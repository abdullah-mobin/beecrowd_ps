#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
typedef long long int lli;
lli fct (lli a)
{
	lli sum=1;
	if (a==0)
	{
		return 1;
	}
	
	for (lli i = a; i >=1; i--)
	{
		sum = sum * i;
	}
	return sum;
}

int main()
{
	lli a,b;
	while (cin >> a >> b)
	{
		
		cout << fct(a)+fct(b)<<endl;
	}

	return 0;
}
