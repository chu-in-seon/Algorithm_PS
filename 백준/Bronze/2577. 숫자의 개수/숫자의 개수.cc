#include <iostream>
#include <string>

using namespace std;

int main()
{
    unsigned short first, second, third;
    cin >> first >> second >> third;
    long long calculated_value = first * second * third;
    
    string toStr = to_string(calculated_value);
    int strSize = static_cast<int>(toStr.length());
    int cntOfNum[10] = {0, };
    
    for(int i = 0; i < strSize; i++)
    {
        int num = toStr[i] - '0';
        cntOfNum[num]++;
    }
    
     for(int i = 0; i < 10; i++)
    {
        cout << cntOfNum[i] << endl;
    }
    
    return 0;
}
