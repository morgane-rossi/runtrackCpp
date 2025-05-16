#include <iostream>
#include <fmt/core.h>

int main() {

    int n, m ;
    std::cout << "Saisissez n";
    std::cin >> n ;
    std::cout << "Saisissez m";
    std::cin >> m ;
    std::cout << "Avant échange : \n";
    std::cout << fmt::format("n : {} - m : {}\n", n, m);
    int temp = m ;
    m = n ;
    n = temp ;

    std::cout << "Après échange : \n";
    std::cout << fmt::format("n : {} - m : {}\n", n, m);

    return 0;
}