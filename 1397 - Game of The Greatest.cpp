#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int a, x, y;
	while (cin >> a)
	{
		int cntX = 0, cntY = 0;
		if (a == 0)
			return 0;
		
		while (a--)
		{
			cin >> x >> y;
			if (x > y)
				cntX++;
			else if (x < y)
				cntY++;
		}
		cout << cntX << " " << cntY << endl;
	
	}

	return 0;
}
