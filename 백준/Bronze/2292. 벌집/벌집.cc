#include <iostream>

int main ()
{
    std::ios::sync_with_stdio(false);

    long long input = 0;
    std::cin >> input;
    if (0 == input)
    {
        std::cout << 1;
        return 0;
    }
    else
    {
        long long sum = 2;
        int level = 1;

        while(input >= sum)
        {
            sum += 6 * (level++);
        }
        std::cout << level;
    }
    
    return 0;
}