#include <iostream>
#include <string>

int main()
{
    int T[10] ;
    for (int i = 0 ; i < 10 ; i++)
    {
        std::cin >> T[i];
    }
    int compteur = 0 ;
    for (int j = 0 ; j < 10 ; j++)
    {
        if (T[j] >= 5)
        {
            compteur += 1 ;
        }
    }
    std::cout << "nombre d'entiers > ou = 5 : " << compteur << std::endl;

    return 0 ;
}