#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    int a, b;
    std::cin >> a >> b;
    int revA = (a / 100) + (a % 100 - a % 10) + (a % 10 * 100);
    int revB = (b / 100) + (b % 100 - b % 10) + (b % 10 * 100);
    (revA >= revB) ? (std::cout << revA) : (std::cout << revB);

    return 0;
}