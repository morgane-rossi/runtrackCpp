#include <iostream>
#include <fmt/core.h>

using namespace std;

int main() {
    int a ;
    std::cout << "Veuillez rentrer un nombre entier\n" ;
    cin >> a ;
    for (int i = 1 ; i < 11 ; i++)
    {
        std::string resultat = fmt::format("Le résultat de {} * {} = {}\n", a, i, a * i);
        std::cout << resultat ;
    }

    return 0;
}