#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i = 1;
	for (int j = 60; j >= 0; j -= 5)
	{
		cout << "I=" << i << " J=" << j << endl;
		i=i+3;
		if (j == 0)
		{
			return 0;
		}
	}

	return 0;
}