#include <iostream>

int main()
{
    int n ;
    std::cout << "Saisissez un nombre\n";
    std::cin >> n ;
    switch (n)
    {
    case 0 : std::cout << "Nul\n";
    case 1 :
    case 2 : std::cout << "Petit\n";
        break;
    
    case 3 :
    case 4 :
    case 5 : std::cout << "Moyen\n" ;
    default: std::cout << "Grand\n";
    }
    /*
    0 : "Nul\nPetit"
    1 : "Petit"
    4 : "Moyen\nGrand"
    10 : "Grand"
    -5 : "Grand"
    */

    return 0 ;
}