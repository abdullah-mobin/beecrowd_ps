#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int x;
        string name;
        cin >> name >> x;
        if ( name == "Thor" )
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "T" << endl;
        } 
    }
    
    return 0;
}