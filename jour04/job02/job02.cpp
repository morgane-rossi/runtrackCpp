#include <iostream>

int main()
{
    int a = 32 ;
    int b = 72 ;
    
    int *ptrA = &a;  // Pointeur vers a
    int *ptrB = &b;  // Pointeur vers b

    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    return 0 ;
}