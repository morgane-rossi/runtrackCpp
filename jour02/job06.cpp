#include <iostream>

using namespace std;

int main()
{
    int n ;
    cout << "Entrez un nombre entier \n";
    cin >> n ;
    for (int i = 1 ; i <= n ; i++)
    {
        if (i % 15 == 0)
        {
            cout << i << " est un multiple de 15\n";
        }
        else if (i % 3 == 0)
        {
            cout << i << " est un multiple de 3\n";
        }
        else if (i % 5 == 0)
        {
            cout << i << " est un multiple de 5\n";
        }
    }

   return 0;
}