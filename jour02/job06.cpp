#include <iostream>

int main()
{
    int n ;
    std::cout << "Entrez un nombre entier \n";
    std::cin >> n ;
    for (int i = 1 ; i <= n ; i++)
    {
        if (i % 15 == 0)
        {
            std::cout << i << " est un multiple de 15\n";
        }
        else if (i % 3 == 0)
        {
            std::cout << i << " est un multiple de 3\n";
        }
        else if (i % 5 == 0)
        {
            std::cout << i << " est un multiple de 5\n";
        }
    }

   return 0;
}