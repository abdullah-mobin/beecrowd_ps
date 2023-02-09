#include <iostream>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t, n, i = 0;
	cin >> t;

	while (t--)
	{
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		sort(arr, arr + n);

		int target = n / 2;
		cout << "Case " << ++i << ": " << arr[target] << endl;
	}

	return 0;
}