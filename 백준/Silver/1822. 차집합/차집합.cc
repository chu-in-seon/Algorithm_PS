#include <iostream>
#include <set>

int main()
{
    std::set<int> aGroup;
    int aSize = 0, bSize = 0;
    std::cin >> aSize >> bSize;

    for(int idx = 0; idx < aSize; idx++)
    {
        int item = 0;
        std::cin >> item;
        aGroup.insert(item);
    }
    
    for(int idx = 0; idx < bSize; idx++)
    {
        int item = 0;
        std::cin >> item;
        if (aGroup.end() == aGroup.find(item))
        {
            continue;
        }
        aGroup.erase(item);
    }

    std::set<int>::iterator end = aGroup.end();
    int remainSize = static_cast<int>(aGroup.size());
    std::cout << remainSize << '\n';
    for(int item : aGroup)
    {
        std::cout << item << ' ';          
    }
    return 0;
}