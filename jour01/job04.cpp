#include <iostream>
#include <fmt/core.h>


int main() {
    double a, b ;
    std::cout << "Veuillez rentrer un premier nombre\n" ;
    std::cin >> a ;
    std::cout << "Veuillez rentrer un second nombre\n" ;
    std::cin >> b ;
    std::string resultat = fmt::format("Le résultat de {} + {} = {}\n", a, b, (a+b));
    std::cout << resultat ;
    return 0;
}