#include <iostream>
#include <fmt/core.h>

int main() {
    int a ;
    std::cout << "Veuillez rentrer un nombre entier\n" ;
    std::cin >> a ;
    for (int i = 1 ; i < 11 ; i++)
    {
        std::string resultat = fmt::format("Le résultat de {} * {} = {}\n", a, i, a * i);
        std::cout << resultat ;
    }

    return 0;
}