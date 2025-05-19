#include <iostream>

int main()
{
    int mytab[] = {8, 32, 4, -6, 2} ;

    for(const auto &ptr : mytab)
    {
        std::cout << "adresse : " << &ptr << " - valeur : " << ptr << std::endl  ;
    }

    return 0 ;
}