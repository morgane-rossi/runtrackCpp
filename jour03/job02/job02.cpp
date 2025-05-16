#include <iostream>

int main()
{
    std::string mystr = "vive la plateforme !";
    std::string output;
    output.reserve(mystr.size());
    for (size_t i = 0 ; i <mystr.size() ; i++)
    {
        if ( !(mystr[i] == 'a' || mystr[i] == 'e' || mystr[i] == 'i' || mystr[i] == 'o' || mystr[i] == 'u' || mystr[i] == 'y'))
        {
            output += mystr[i];
        }
    }
    std::cout << output << std::endl;

    return 0 ;
}

