#include <iostream>

int main()
{
    int entier = 17 ;
    float flottant = 3.14 ;
    double reel = 123.45 ;
    char caractere[] = "La Plateforme" ;

//    Afficher l’adresse mémoire de chaque variable ainsi que leurs valeurs.
    std::cout << "entier : adresse mémoire :" << &entier << " - valeur : " << entier << std::endl ;
    std::cout << "flottant : adresse mémoire :" << &flottant << " - valeur : " << flottant << std::endl ;
    std::cout << "reel : adresse mémoire :" << &reel << " - valeur : " << reel << std::endl ;
    std::cout << "caractere : adresse mémoire :" << &caractere << " - valeur : " << caractere << std::endl ;

    return 0 ;
}