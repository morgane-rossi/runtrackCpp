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

bool palindrome(char *tableau)
{
    int debut = 0 ;
    int fin = my_strlen(tableau) - 1;
    while(debut < fin)
    {
        if(tableau[debut] == tableau[fin])
        {
            debut ++;
            fin --;
        }
        else {
            return false ;
        }
    }
    return true;
}

int main()
{
    char tab[5][50] = {"radar", "hello", "lvel", "stats", "world"};
    for (int i = 0 ; i < 5 ; i++)
    {
        if (palindrome(tab[i]))
        {
            std::cout << tab[i] << std::endl;
        }
    }
    
    return 0 ;
}