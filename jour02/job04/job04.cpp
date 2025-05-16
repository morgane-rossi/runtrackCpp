#include <iostream>

int main()
{
    double result = 0 ;
    double first, second ;
    std::string symbol ;
    std::cout << "Premier nombre ?\n";
    std::cin >> first ;
    std::cout << "Symbole : + ; - / ; *\n ";
    std::cin >> symbol ;
    std::cout << "Second nombre ?\n";
    std::cin >> second ;

    if (symbol == "+")
    {
        result = first + second ;
    }
    if (symbol == "-")
    {
        result = first - second ;
    }
    if (symbol == "*")
    {
        result = first * second ;
    }
    if (symbol == "/" && second != 0)
    {
        result = first / second ;
    }
    std::cout << "Resultat : " << result << std::endl ;

   return 0;
}