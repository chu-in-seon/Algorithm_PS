#include <iostream>
#if 0
#include <string>
#include <sstream>

int strToInt(const std::string &inp)
{
    std::stringstream ss(inp);
    int ret;
    if ((ss >> ret).fail())
    {
        return -1;
    }
    return ret;
}

int main()
{
    std::string a, b;
    std::cin >> a >> b;
    std::string revA, revB;
    size_t aSize = a.size(), bSize = b.size();
    int aNum = 0, bNum = 0;
    if (aSize == bSize)
    {
        for(int idx = aSize - 1; idx >= 0; idx--)
        {
            revA.push_back(a[idx]);
            revB.push_back(b[idx]);
        }
    }

    aNum = strToInt(revA);
    bNum = strToInt(revB);

    if (aNum >= bNum)
    {
        std::cout << aNum;
    }
    else
    {
        std::cout << bNum;
    }
    return 0;
}
#endif

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