#include <iostream>
#include <fmt/core.h>

int main() {

    double prix_carottesHT, poidsCarottes ;
    std::cout << "Veuillez saisir un prix HT";
    std::cin >> prix_carottesHT ;
    std::cout << "Veuillez saisir la quantité en kilogrammes";
    std::cin >> poidsCarottes ;

    std::cout << fmt::format("Le prix total est : {}\n", prix_carottesHT * poidsCarottes * 1.15);

    return 0;
}