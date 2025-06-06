#include <iostream>

int my_strlen(char * str)
{
    int i = 0 ;
    while (str[i] != '\0')
    {
        i ++ ;
    }
    return i ;
}

int my_strcmp(char *str1, char *str2)
{
    int taille_str = my_strlen(str1) + 1;

    for (int i = 0 ; i <= taille_str ; i++)
    {
        if (str1[i] == '\0' && str2[i] == '\0')
        {
            return 0 ;
        }
        else if (str1[i] == '\0' || str2[i] == '\0' || str1[i] != str2[i])
        {
            return 1 ;
        }
    }
    return 0 ;
}

int main()
{
    char str1[] = "ac" ;
    char str2[] = "abcde" ;

    int resultat = my_strcmp (str1, str2) ;
    if (resultat == 0)
    {
        std::cout << "les 2 chaines sont egales\n";
    }
    else
    {
        std::cout << "les 2 chaînes sont differentes\n";
    }

    return 0 ;
}