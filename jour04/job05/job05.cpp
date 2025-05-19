#include <iostream>

typedef struct point
{
    int x ;
    int y ;
} Point ;

//    int *ptr_a = &a ;
int main()
{
    Point mypoint ;
    mypoint.x = 1 ;
    mypoint.y = 2 ;

    Point *ptr_point ;
    ptr_point = &mypoint ;

    ptr_point->x = 32 ;
    ptr_point->y = 54 ;

    std::cout << "valeur de x : " << mypoint.x << std::endl ;
    std::cout << "valeur de y : " << mypoint.y << std::endl ;

    return 0 ;
}