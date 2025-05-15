#include <iostream>

using namespace std;

int main()
{
    double result = 0 ;
    double first, second ;
    string symbol ;
    cout << "Premier nombre ?\n";
    cin >> first ;
    cout << "Symbole : + ; - / ; *\n ";
    cin >> symbol ;
    cout << "Second nombre ?\n";
    cin >> second ;

    if (symbol == "+")
    {
        result = first + second ;
    }
    if (symbol == "-")
    {
        result = first - second ;
    }
    if (symbol == "*")
    {
        result = first * second ;
    }
    if (symbol == "/" && second != 0)
    {
        result = first / second ;
    }
    cout << "Resultat : " << result << std::endl ;

   return 0;
}