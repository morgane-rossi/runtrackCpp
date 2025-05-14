#include <iostream>
#include <fmt/core.h>

using namespace std;

int main() {

    double somme ;
    for (int i = 0 ; i < 5 ; i++)
    {
        std::cout << "Veuillez rentrer un entier\n" ;
        int temp;
        std::cin >> temp ;
        somme += temp ;
    }

    std::cout << fmt::format("La moyenne est : {}\n", somme / 5);

    return 0;
}