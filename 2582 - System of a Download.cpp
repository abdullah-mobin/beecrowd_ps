#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin >> a >> b;
        switch (a+b)
        {
        case 0 :
            cout << "PROXYCITY" << endl;
            break;
        case 1 :
            cout << "P.Y.N.G." << endl;
            break;
        case 2 :
            cout << "DNSUEY!" << endl;
            break;
        case 3 :
            cout << "SERVERS" << endl;
            break;
        case 4 :
            cout << "HOST!" << endl;
            break;
        case 5 :
            cout << "CRIPTONIZE" << endl;
            break;
        case 6 :
            cout << "OFFLINE DAY" << endl;
            break;
        case 7 :
            cout << "SALT" << endl;
            break;
        case 8 :
            cout << "ANSWER!" << endl;
            break;
        case 9 :
            cout << "RAR?" << endl;
            break;
        case 10 :
            cout << "WIFI ANTENNAS" << endl;
            break;
        
        default:
            break;
        }
    }
    
}



// 0 - PROXYCITY
// 1 - P.Y.N.G.
// 2 - DNSUEY!
// 3 - SERVERS
// 4 - HOST!
// 5 - CRIPTONIZE
// 6 - OFFLINE DAY
// 7 - SALT
// 8 - ANSWER!
// 9 - RAR?
// 10 - WIFI ANTENNAS