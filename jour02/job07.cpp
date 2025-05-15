#include <iostream>

using namespace std;

int main()
{
    int a, b ;
    cout << "Saisissez un nombre entier\n";
    cin >> a ;
    cout << "Saisissez un nombre entier\n";
    cin >> b ;
    for (int i = a ; i <= b ; i++)
    {
        cout << i << endl ;
    }

   return 0;
}