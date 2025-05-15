#include <iostream>

using namespace std;

int main()
{
    /* version boucle while */
    int i, n, som ;
    i = 0 ;
    som = 0 ;

    while(i < 4)
    {
        cout << "Donnez un entier\n";
        cin >> n ;
        som += n ;
        i++ ;
    }

    cout << "Somme :" << som << std::endl ;

    /* version do... while */
    i = 0 ;
    som = 0 ;
    do
    {
        cout << "Donnez un entier\n";
        cin >> n ;
        som += n ;
        i++ ;
    }
    while(i < 4);

    cout << "Somme :" << som << std::endl ;

   return 0;
}