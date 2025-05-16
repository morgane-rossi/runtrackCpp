#include <iostream>

int main()
{
    int n ;
    std::cout << "Veuillez rentrer un nombre" << std::endl;
    std::cin >> n ;
    while (n > 0)
    {
        std::cout << "Hello World" << std::endl ;
        n-- ;
    }

   return 0;
}