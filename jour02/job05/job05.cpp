#include <iostream>

int main()
{
    double note = -1 ;
    while ( ! (note >= 0 && note <= 20))
    {   std::cout << "Entrez une note\n";
        std::cin >> note ;
    }
        if (note > 10)
        {
            std::cout << "validé\n";
        }
        else
        {
            std::cout << "non validé\n";
        }
    
   return 0;
}