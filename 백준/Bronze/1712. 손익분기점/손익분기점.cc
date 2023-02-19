#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    long long a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;
    if (b >= c) {
        std::cout << -1;
    }
    else {
        std::cout << a / (c - b) + 1;
    }
    return 0;
}