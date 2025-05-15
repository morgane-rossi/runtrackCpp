
#include <iostream>
#include <cmath>

using namespace std;

int factorielle(int n)
{
    if (n == 1)
    {
        return 1 ;
    }
    else
    {
        return n * factorielle(n-1);
    }

}

int main()
{
    int n ;
    cout << "Saisissez un nombre entier\n";
    cin >> n ;
    int resultat = factorielle(n);
    cout << resultat << endl ;

   return 0;
}