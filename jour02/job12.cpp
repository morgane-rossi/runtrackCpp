
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n ;
    cout << "Saisissez un nombre entier\n";
    cin >> n ;
    double somme = 0 ;
    int i = 0 ;
    double j = 1 ;
    while (i < n)
    {
        somme += (double) (1 / j);
        i++ ;
        j ++ ;
    }
    cout << somme << endl ;

   return 0;
}