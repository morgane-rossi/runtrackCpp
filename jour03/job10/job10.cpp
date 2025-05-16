#include <iostream>
#include <string>

std::string contenir(std::string a, std::string b)
{
   if (b.find(a))
    {
        return "vrai";
    }
    else
    {
        return "faux";
    }
}

int main()
{
    std::string string ;
    std::cin >> string ;
    std::string string2 = "Bonjour";
    if (string > string2)
    {
        std::cout << "'Bonjour' en premier\n";
    }
    else if (string < string2)
    {
        std::cout << "'Bonjour' en deuxième\n";
    }

    return 0 ;
}