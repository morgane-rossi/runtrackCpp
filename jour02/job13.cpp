
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "    I 1  2   3" ;
    for (int i = 4 ; i <= 10 ; i++)
    {
        cout << "   "  << i  ;
    }
    cout << endl ;
    for (int i = 0 ; i <= 10 ; i++)
    {
        cout << "----" ;
    }
    cout << endl ;

    for (int i = 1 ; i <= 10 ; i++)
    {
        cout << i << "   I  " ;
        for (int j = 1 ; j <= 10 ; j++)
        {
            cout << i*j << "  " ;
        }
        cout << endl ;
    }

   return 0;
}