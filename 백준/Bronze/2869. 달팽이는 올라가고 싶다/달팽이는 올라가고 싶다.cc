#include <iostream>

int main()
{
    int up = 0, down = 0;
    unsigned long V = 0;
    std::cin >> up >> down >> V;
    std::cout << (V - down - 1) / (up - down) + 1;
    return 0;
}