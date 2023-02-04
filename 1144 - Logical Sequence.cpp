#include <iostream>

using namespace std;

int main()
{

	int A;

	cin >> A;

	for (int i = 1; i <= A; i++)
	{
		cout << i << " " << i * i << " " << i * i * i << endl;
		cout << i << " " << i * i + 1 << " " << i * i * i + 1 << endl;
	}
	return 0;
}