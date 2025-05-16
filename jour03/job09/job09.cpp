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
    std::string str_a ;
    std::getline(std::cin, str_a);
    std::string str_b ;
    std::getline(std::cin, str_b);
    std::string result = contenir(str_a, str_b);
    std::cout << result << std::endl;

    return 0 ;
}