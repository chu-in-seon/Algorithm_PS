#include <iostream>

int main ()
{
    std::ios::sync_with_stdio(false);
    int a = 1, b = 1, input = 0, direction = 0;
    std::cin >> input;
    for(int i = 0; i < input - 1; i++)
    {
        switch (direction)
        {
            case 0: // move right
                a += 1;
                direction = 1;
                break;

            case 1: // move left down
                a -= 1;
                b += 1;
                if (1 == a)
                {
                    direction = 2;
                }
                break;
            
            case 2: // move down
                b += 1;
                direction = 3;
                break;

            case 3: // move right up
                a += 1;
                b -= 1;
                if (1 == b)
                {
                    direction = 0;
                }
                break;

            default: // do nothing
                break;
        }
    }

    std::cout << b << '/' << a;
    return 0;
}