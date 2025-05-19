#include <iostream>

int main()
{
    int number = 2019 ;

    // pointeur initialisé à la valeur 0
    int *pointeur(0);

    pointeur = &number ;

    std::cout << "La valeur de 'number' est : " << *pointeur << std::endl;

    return 0 ;
}