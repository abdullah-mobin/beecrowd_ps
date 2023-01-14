#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int x;
	cin >> x ;
	while (x--)
	{
		int a;
		cin >> a;
		if (a > 0)
		{
			if (a%2==1)
				cout << "ODD POSITIVE" << endl;
			else
				cout << "EVEN POSITIVE" << endl;			
		}
		
		else if (a < 0)
		{
			if (abs(a)%2==1)
				cout << "ODD NEGATIVE" << endl;
			else
				cout << "EVEN NEGATIVE" << endl;
		}
		else
			cout << "NULL" << endl;
	}
	return 0;
}
