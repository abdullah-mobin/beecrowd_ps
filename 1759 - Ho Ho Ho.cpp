#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int a;
   cin>>a;
   for (int i = 1; i <= a; i++)
   {
      if (i==a)
      {
         cout << "Ho!" << endl;
      }
      else
      cout << "Ho " ;
   }
   
   return 0;
}