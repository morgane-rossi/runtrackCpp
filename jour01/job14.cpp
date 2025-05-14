#include <iostream>
#include<string>

using namespace std;

int main() {
    std::cout << "Saisissez un entier\n";
    int n ;
    std::cin >> n ;
    string mystr = to_string(n);
    int taille = mystr.length();
    for (int i = taille ; i >=0 ; i--)
    {
        std::cout << mystr[i];
    }
    std::cout << endl;

    return 0;
}