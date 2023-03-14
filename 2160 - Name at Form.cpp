#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string line;
    getline(cin,line);
    (line.length()<=80)?cout<<"YES\n":cout<<"NO\n";
    return 0;
}