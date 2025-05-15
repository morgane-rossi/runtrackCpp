#include <iostream>

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int a = 0 ;
    int b = 1 ;
    for (int i = 2 ; i < n+1 ; i++)
    {
        int temp = b ;
        b = a + b ;
        a = temp ;
        
    }
    return b ;
}

int main()
{
    std::cout << "Saisissez un nombre entier\n" ;
    int n ;
    std::cin >> n ;
    std::cout << fibonacci(n) << std::endl ;

   return 0;
}