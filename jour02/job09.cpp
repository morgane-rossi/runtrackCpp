#include <iostream>

using namespace std;

int main()
{
    int a, b, n ;
    cout << "Saisissez un nombre entier\n";
    cin >> a ;
    cout << "Saisissez un nombre entier\n";
    cin >> b ;
    cout << "Saisissez n\n";
    cin >> n ;
    if ((a < b && n >= a && n <=b) || (a > b && n <= a && n >= b))
    {
        cout << "GAGNE\n";
    }
    else
    {
        cout << "PERDU\n";
    }
   return 0;
}