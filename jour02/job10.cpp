#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a ;
    do
    {
        cout << "donnez un nombre positif : ";
        cin >> a ;
        {
            if (a < 0)
            {
                cout << "svp positif\n";
            }
            else
            {
                cout << "sa racine carree est : " << sqrt(a) <<endl ;
            }
        }    
    }
    while (a != 0);

   return 0;
}