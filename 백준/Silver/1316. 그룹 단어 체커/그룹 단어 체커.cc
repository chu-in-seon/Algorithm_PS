#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    int testCase = 0, result = 0;
    std::cin >> testCase;
    while(testCase--)
    {
        std::string inp;
        std::cin >> inp;

        int inpSize = static_cast<int>(inp.size());
        char prevChar = inp[0];
        std::string checker;
        checker.push_back(prevChar);
        result++;
        for(int idx = 1; idx < inpSize; idx++)
        {
            if (prevChar != inp[idx])
            {
                prevChar = inp[idx];
                if(std::string::npos != checker.find(inp[idx]))
                {
                    result--;
                    break;
                }
                else
                {
                    checker.push_back(inp[idx]);
                }
                
            }
        }
    }

    std::cout << result;
    return 0;
}