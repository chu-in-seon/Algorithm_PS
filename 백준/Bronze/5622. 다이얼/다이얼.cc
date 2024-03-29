#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::string inp;
    int t = 0;
    std::cin >> inp;
    for (char c : inp)
    {
        switch (c)
        {
        case 'A':
        case 'B':
        case 'C':
            t += 3;
            break;
        case 'D':
        case 'E':
        case 'F':
            t += 4;
            break;
        case 'G':
        case 'H':
        case 'I':
            t += 5;
            break;
        case 'J':
        case 'K':
        case 'L':
            t += 6;
            break;
        case 'M':
        case 'N':
        case 'O':
            t += 7;
            break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            t += 8;
            break;
        case 'T':
        case 'U':
        case 'V':
            t += 9;
            break;
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            t += 10;
            break;
        }
    }
    
    std::cout << t;
    return 0;
}