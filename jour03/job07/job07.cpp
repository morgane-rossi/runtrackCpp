#include <iostream>
#include <string>

int main()
{
    int T[10] ;
    for (int i = 0 ; i < 10 ; i++)
    {
        std::cin >> T[i];
    }
    int indice_mx = 0 ;
    int maxi = T[0];

    for (int j = 0 ; j < 10 ; j++)
    {
        if(T[j] > maxi)
        {
            maxi = T[j];
            indice_mx = j ;
        }
    }
    std::cout << "Indice du + grand élément : " << indice_mx << std::endl;

    return 0 ;
}