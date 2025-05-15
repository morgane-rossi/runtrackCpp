#include <iostream>
#include <cmath>

int main()
{
    int n ;
    std::cout << "Saisissez un nombre entier\n";
    std::cin >> n ;
    double somme = 0 ;
    int i = 0 ;
    double j = 1 ;
    while (i < n)
    {
        somme += (double) (1 / j);
        i++ ;
        j ++ ;
    }
    std::cout << somme << std::endl ;

   return 0;
}