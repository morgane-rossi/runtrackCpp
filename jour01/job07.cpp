#include <iostream>
#include <fmt/core.h>

int main() {
    int a ;
    std::cout << "Veuillez rentrer un nombre entier\n" ;
    std::cin >> a ;
    if (a % 2 ==0)
    {
        std::string resultat = fmt::format("Le nombre {} est pair\n", a);
    }
    else
    {
        std::string resultat = fmt::format("Le nombre {} est impair\n", a);
    }

    return 0;
}