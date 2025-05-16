#include <iostream>

int main() {
    std::cout << "Saisissez un entier\n";
    int n ;
    std::cin >> n ;
    while (n < 5)
    {
        std::cout << "Saisissez un entier\n";
        std::cin >> n ;
    }
    int i = 5 ;
    int somme = i * i * i ;
    while (i < n)
    {
        i ++ ;
        somme += (i * i * i);
    }
    std::cout << somme <<std::endl ;

    return 0;
}