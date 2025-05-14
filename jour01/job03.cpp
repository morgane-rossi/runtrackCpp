#include <iostream>

using namespace std;

int main()
{
    int n ;
    std::cout << "Veuillez rentrer un nombre" << std::endl;
    cin >> n ;
    while (n > 0)
    {
        std::cout << "Hello World" << std::endl ;
        n-- ;
    }

   return 0;
}