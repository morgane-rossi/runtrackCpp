#include <iostream>

int main()
{
    int a, b, c ;
    a = 4 ;
    b = 5 ;
    c = 6 ;
    
    int *ptr_a = &a ;
    *ptr_a = 42 ;

    int *ptr_b = &b ;
    *ptr_b = 36 ;

    int *ptr_c = &c ;
    *ptr_c = 52 ;

    std::cout << a << std::endl ;
    std::cout << b << std::endl ;
    std::cout << c << std::endl ;

    return 0 ;
}