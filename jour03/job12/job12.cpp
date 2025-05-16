#include <iostream>
#include <cstdlib>
#include <time.h>

int main()
{
    int nb_chances = 7 ;
    std::cout << "Bienvenue au jeu du nombre mystere !\n";
    srand(time(0));

    int nb_mystere = rand() % 101 ;
    int nb_joueur ;
    std::cout << "Veuillez rentrer un nombre compris entre 1 et 100\n";
    std::cin >> nb_joueur;

    while (nb_chances > 0 && nb_joueur != nb_mystere)
    {
        if(nb_joueur < nb_mystere)
        {
           std::cout << "trop petit\n";
        }
        else
        {
           std::cout << "trop grand\n";
        }
        std::cout << "Il reste encore " << nb_chances << " chances\n";
        nb_chances -- ;
        std::cin >> nb_joueur;
    }
    if (nb_joueur == nb_mystere)
    {
    std::cout << "Félicitations vous avez gagné !\n";
    }
    else
    {
    std::cout << "Perdu !\n Le nombre mystère était :" << nb_mystere << "\n" ;
    }

    return 0 ;
}