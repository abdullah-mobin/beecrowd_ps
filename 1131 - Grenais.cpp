#include <iostream>
#include <iomanip>
using namespace std;

int repetar(int x)
{
	if (x == 1)
	{
		return 1;
	}
	if (x == 2)
	{
		return 0;
	}
	if (x > 2 || x < 1)
	{
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> x;
		repetar(x);
	}
}

int main()
{
	int a, b, rpt, inter = 0, gremio = 0, drow = 0, gene = 0;
good:
	gene++;
	cin >> a >> b;
	if (a > b)
	{
		inter++;
	}
	else if (a < b)
	{
		gremio++;
	}
	else
	{
		drow++;
	}
	cout << "Novo grenal (1-sim 2-nao)" << endl;
	cin >> rpt;
	int again = repetar(rpt);

	if (again == 1)
	{
		goto good;
	}
	else
	{

		cout << gene << " grenais" << endl;
		cout << "Inter:" << inter << endl;
		cout << "Gremio:" << gremio << endl;
		cout << "Empates:" << drow << endl;

		if (inter > gremio)
		{
			cout << "Inter venceu mais" << endl;
		}
		else if (inter < gremio)
		{
			cout << "Gremio venceu mais" << endl;
		}
		else
		{
			cout << "Não houve vencedor" << endl;
		}
	}

	return 0;
}