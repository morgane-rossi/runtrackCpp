#include <iostream>

int main()
{
    /* version boucle while */
    int i, n, som ;
    i = 0 ;
    som = 0 ;

    while(i < 4)
    {
        std::cout << "Donnez un entier\n";
        std::cin >> n ;
        som += n ;
        i++ ;
    }

    std::cout << "Somme :" << som << std::endl ;

    /* version do... while */
    i = 0 ;
    som = 0 ;
    do
    {
        std::cout << "Donnez un entier\n";
        std::cin >> n ;
        som += n ;
        i++ ;
    }
    while(i < 4);

    std::cout << "Somme :" << som << std::endl ;

   return 0;
}