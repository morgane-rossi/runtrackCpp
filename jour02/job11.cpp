#include <iostream>
#include <cmath>

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
    std::cout << "Saisissez un nombre entier\n";
    std::cin >> n ;
    int resultat = factorielle(n);
    std::cout << resultat << std::endl ;

   return 0;
}