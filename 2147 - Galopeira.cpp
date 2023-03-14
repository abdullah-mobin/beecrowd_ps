#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string str;
        getline(cin,str);
        cout << fixed << setprecision(2);
        cout << str.length()*.01<<endl; 
    }
    
    return 0;
}