#include <vector>
long long sum(std::vector<int> &a)
{
    long long ans = 0;
    const int aSize = static_cast<int>(a.size());
    for(int idx = 0; idx < aSize; idx++)
    {
        ans += a[idx];
    }
    return ans;
}
