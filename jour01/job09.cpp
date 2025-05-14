#include <iostream>
#include <fmt/core.h>

using namespace std;

int main() {
    double a, b, c ;
    cin >> a >> b >> c ;
    double maxi = a ;
    if (b > a)
    {
        maxi = b ;
    }
    if (c > a)
    {
        maxi = c ;
    }
    std::cout << fmt::format("Le plus grand des 3 nombres est : {}\n", maxi);

    return 0;
}