#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    int burger = 2001;
    int bebarage = 2001;
    int tmp = 0;
    
    for (int idx = 0; idx < 3; idx++)
    {
        std::cin >> tmp;
        if (tmp < burger)
        {
            burger = tmp;
        }
    }
    for(int idx = 0; idx < 2; idx++)
    {
        std::cin >> tmp;
        if (tmp < bebarage)
        {
            bebarage = tmp;
        }
    }

    std::cout << (burger + bebarage) - 50 << '\n';
    return 0;
}