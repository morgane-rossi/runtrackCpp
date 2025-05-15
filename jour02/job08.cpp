#include <iostream>

using namespace std;

int main()
{
    int a, b, i ;
    cout << "Saisissez un nombre entier\n";
    cin >> a ;
    cout << "Saisissez un nombre entier\n";
    cin >> b ;
    i = a ;
    while (i <= b)
    {
        cout << i << endl ;
        i++ ;
    }

   return 0;
}