#include <iostream>

int main()
{
    int T[10] ;
    for (int i = 0 ; i < 10 ; i++)
    {
        std::cin >> T[i];
    }
    int somme = 0 ;
    for (int j = 0 ; j < 10 ; j++)
    {
        if(T[j] %2 == 0)
        {
            somme += T[j];
        }
    }
    std::cout << "Resultat : " << somme << std::endl;

    return 0 ;
}