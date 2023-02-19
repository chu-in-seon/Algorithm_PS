#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string a, b, result;
    std::cin >> a >> b;
    
    int sum = 0;
    while (!a.empty() || !b.empty() || sum) {
		if (!a.empty()) 
        {
            sum += a.back() - '0';
            a.pop_back();
        }
		if (!b.empty()) 
        {
            sum += b.back() - '0';
            b.pop_back();
        }
		result.push_back((sum % 10) + '0');
		sum /= 10;
	}
    
    std::reverse(result.begin(), result.end());
    std::cout << result;
    return 0;
}