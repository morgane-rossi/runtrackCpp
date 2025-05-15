#include <iostream>

int main()
{
    int a, b ;
    std::cout << "Saisissez un nombre entier\n";
    std::cin >> a ;
    std::cout << "Saisissez un nombre entier\n";
    std::cin >> b ;
    for (int i = a ; i <= b ; i++)
    {
        std::cout << i << std::endl ;
    }

   return 0;
}