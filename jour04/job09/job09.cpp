#include <iostream>
#include <vector>

int main()
{

    std::cout << "Taille du tableau ?\n" ;
    int tailletab ;
    std::cin >> tailletab ;

    std::vector<int>entiers(tailletab);

    // faire saisir valeurs par utilisateur
    for (int &i : entiers)
    {
        std::cout << "Saisissez un entier\n";
        std::cin >> i ;
    }

    for (int j : entiers)
    {
        std::cout << "valeur = " << j << "\n";
    }


    return 0 ;
}