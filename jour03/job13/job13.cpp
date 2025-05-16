#include <iostream>

int main()
{
    int valeurs[100][100];
    int nbValeurs[2];

    std::cout << "Tableau 1\nNombre de valeurs :\n";
    std::cin >>nbValeurs[0];
    std::cout << "Tableau 2\nNombre de valeurs :\n";
    std::cin >>nbValeurs[1];

    for (int i = 0; i < nbValeurs[0]; i++)
    {
        scanf("%d", &valeurs[0][i]);
    }
    for (int j = 0; j < nbValeurs[1]; j++)
    {
        scanf("%d", &valeurs[1][j]);
    }

    int total = nbValeurs[0]+ nbValeurs[1];
    int fusion[total];

    int pos1 = 0;
    for (int pos0 = 0; pos0 < nbValeurs[0]; pos0++)
    {
        int courant0 = valeurs[0][pos0];
        while (pos1 < nbValeurs[1] && valeurs[1][pos1] < courant0)
        {
            
            int posF = pos0 + pos1;
            fusion[posF] = valeurs[1][pos1];
            pos1++; 
        }
        int posF = pos0 + pos1;
        fusion[posF] = courant0;
    }
    while (pos1 < nbValeurs[1])
    {
            int posF = nbValeurs[0] + pos1;
            fusion[posF] = valeurs[1][pos1];
            pos1++;
    }

    for (int k = 0 ; k < total; k++)
    {
        std::cout << fusion[k] << " - ";
    }
    std::cout << std::endl;

    return 0 ;
}