#include <iostream>

int main()
{
    int a, b, n ;
    std::cout << "Saisissez un nombre entier\n";
    std::cin >> a ;
    std::cout << "Saisissez un nombre entier\n";
    std::cin >> b ;
    std::cout << "Saisissez n\n";
    std::cin >> n ;
    if ((a < b && n >= a && n <=b) || (a > b && n <= a && n >= b))
    {
        std::cout << "GAGNE\n";
    }
    else
    {
        std::cout << "PERDU\n";
    }
   return 0;
}