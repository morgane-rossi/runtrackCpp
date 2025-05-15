#include <iostream>

using namespace std;

int main()
{
    double note = -1 ;
    // note doit etre comprise entre 0 et 20
    while ( ! (note >= 0 && note <= 20) )
    {   cout << "Entrez une note\n";
        std::cin >> note ;
    }
        if (note > 10)
        {
            cout << "validé\n";
        }
        else
        {
            cout << "non validé\n";
        }
    


   return 0;
}