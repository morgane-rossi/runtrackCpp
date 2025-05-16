#include <iostream>
#include <string>

int main()
{
    std::cout << "Entrez l'heure\n" ;
    std::string heure;
    std::cin >> heure ;

    if (heure.size() != 5 && heure[2] != 'H' && heure[2] != 'h')
    {
        std::cout  << "pas bon\n";
    }

    if ( !(heure[0] < 0 || heure[0] > 9) && !(heure[1] < 0 || heure[1] > 9) && !(heure[3] < 0 || heure[3] > 9) &&  !(heure[4] < 0 || heure[4] > 9))
    {
        std::cout  << "pas bon\n";
    }

    std::string h = heure.substr(0, 2);
    int nb_h = stoi(h);
    if (nb_h < 0 || nb_h > 23)
    {
        std::cout  << "pas bon\n";
    }

    std::string m = heure.substr(3, 5);
    int nb_m = stoi(m);
    if (nb_m <0 || nb_m > 59)
    {
        std::cout  << "pas bon\n";
    }

    return 0 ;
}