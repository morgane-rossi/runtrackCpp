#include <iostream>

int main()
{
    std::string mystr ;
    std::getline(std::cin, mystr);
    char tab[101];
    int str_len = mystr.size();
    for (int i = 0 ; i < str_len ; i++)
    {
        tab[i] = mystr[i];
    }
    tab[str_len] = '\0';
    std::cout << tab <<std::endl ;
    return 0 ;
}