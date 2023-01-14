#include<iostream>
using namespace std;

int main()
{
	int x;
	cin >> x ;

	while (x--)
	{
		double a,b,c,p,r;
		cin >> a >> b >> c ;
		printf("%.1f\n", (a*2 + b*3 + c*5)/(2.0+3.0+5.0));
	}
	return 0;
}
