#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int hight, mtr, bra;
        cin >> hight >> mtr >> bra;
        if ((hight >= 200 && hight <= 300) && (mtr >= 50) && (bra >= 150))
        {
            cout << "Sim" << endl;
        }
        else
        {
            cout << "Nao" << endl;
        }
    }

    return 0;
}