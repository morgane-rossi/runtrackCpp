#include <iostream>
#include <cmath>

int main()
{
    double a ;
    do
    {
        std::cout << "donnez un nombre positif : ";
        std::cin >> a ;
        {
            if (a < 0)
            {
                std::cout << "svp positif\n";
            }
            else
            {
                std::cout << "sa racine carree est : " << sqrt(a) << std::endl ;
            }
        }
    }
    while (a != 0);

   return 0;
}