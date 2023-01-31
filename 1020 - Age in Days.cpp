#include <iostream>
using namespace std;

int main()
{
	int a, ano, dia, mes;
	cin >> a;
	ano = a / 365;
	cout << ano << " ano(s)" << endl;
	mes = (a - (ano * 365)) / 30;
	cout << mes << " mes(es)" << endl;
	dia = (a - (ano * 365) - (mes * 30));
	cout << dia << " dia(s)" << endl;

	return 0;
}
