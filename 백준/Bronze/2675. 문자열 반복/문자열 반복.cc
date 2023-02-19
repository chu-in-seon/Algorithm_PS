#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int testCase = 0, R = 0;
    std::string S;
    std::cin >> testCase;
    while(testCase--) {
        std::cin >> R >> S;
        int sLen = static_cast<int>(S.length());
        for(int idx = 0; idx < sLen; idx++) {
            for(int r = 0; r < R; r++) {
                std::cout << S[idx];
            }
        }
        std::cout << '\n';
    }
    return 0;
}