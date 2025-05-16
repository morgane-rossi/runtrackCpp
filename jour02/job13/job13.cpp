
#include <iostream>
#include <cmath>

int main()
{
    std::cout << "    I 1  2   3" ;
    for (int i = 4 ; i <= 10 ; i++)
    {
        std::cout << "   "  << i  ;
    }
    std::cout << std::endl ;
    for (int i = 0 ; i <= 10 ; i++)
    {
        std::cout << "----" ;
    }
    std::cout << std::endl ;

    for (int i = 1 ; i <= 10 ; i++)
    {
        std::cout << i << "   I  " ;
        for (int j = 1 ; j <= 10 ; j++)
        {
            std::cout << i*j << "  " ;
        }
        std::cout << std::endl ;
    }

   return 0;
}