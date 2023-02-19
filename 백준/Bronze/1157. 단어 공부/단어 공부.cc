#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>

template<template <typename> class P = std::less >
struct compare_pair_second {
    template<class T1, class T2> bool operator() (const std::pair<T1, T2> &left, const std::pair<T1, T2> &right) 
    {
        return P<T2>()(left.second, right.second);
    }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::map<char, int> M;
    for(int idx = 0; idx < 27; idx++)
    {
        M.insert(std::make_pair('A' + idx, 0));
    }
    
    std::string S;
    std::cin >> S;
    std::transform(S.begin(), S.end(), S.begin(), ::toupper);
    int sLen = static_cast<int>(S.length());
    for(int idx = 0; idx < sLen; idx++)
    {
        M[S[idx]]++;
    }
    std::vector<std::pair<char, int> > V(M.begin(), M.end());
    std::sort(V.begin(), V.end(), compare_pair_second<std::greater>());

    if (V[0].second == V[1].second)
        std::cout << '?';
    else
        std::cout << V[0].first;
    return 0;
}