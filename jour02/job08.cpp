#include <iostream>

int main()
{
    int a, b, i ;
    std::cout << "Saisissez un nombre entier\n";
    std::cin >> a ;
    std::cout << "Saisissez un nombre entier\n";
    std::cin >> b ;
    i = a ;
    while (i <= b)
    {
        std::cout << i << std::endl ;
        i++ ;
    }

   return 0;
}