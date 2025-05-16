#include <iostream>

int main()
{
    std::string mystr = "vive la plateforme !";
    for (char &c: mystr)
    {
        c = toupper(c);
    }
    std::cout << mystr << std::endl;

    return 0 ;
}

