#include <iostream>
#include <fmt/core.h>

using namespace std;

int main() {
    double a, b ;
    std::cout << "Veuillez rentrer un premier nombre\n" ;
    cin >> a ;
    std::cout << "Veuillez rentrer un second nombre\n" ;
    cin >> b ;
    std::string resultat = fmt::format("Le résultat de {} + {} = {}\n", a, b, (a+b));
    std::cout << resultat ;
    return 0;
}