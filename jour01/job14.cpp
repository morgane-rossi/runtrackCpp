#include <iostream>

int main() {
    std::cout << "Saisissez un entier\n";
    int n ;
    std::cin >> n ;
    std::string mystr = std::to_string(n);
    int taille = mystr.length();
    for (int i = taille ; i >=0 ; i--)
    {
        std::cout << mystr[i];
    }
    std::cout << std::endl;

    return 0;
}