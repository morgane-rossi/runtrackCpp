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

int main()
{
    char mystr[] = "Vive la plateforme !";
    int taillestr = my_strlen(mystr);
    std::cout << "La taille est " << taillestr << std::endl ;

    return 0 ;
}