#include <iostream>

int main() {
    int a ;
    std::cout << "Veuillez rentrer une année\n" ;
    std::cin >> a ;

    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
    {
        std::cout << "C'est une année bissextile\n" ;        
    }
    else
    {
        std::cout << "L'année n'est pas bissextile\n" ;
    }

    return 0;
}