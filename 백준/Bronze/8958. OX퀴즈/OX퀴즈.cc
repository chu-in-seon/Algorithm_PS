#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int TestCase = 0;
    cin >> TestCase;
    while(TestCase--)
    {
        string quizRes;
        cin >> quizRes;
        int scoreTable[81] = {0,};
        int inputSize = static_cast<int>(quizRes.length());
        for(int i = 0; i < inputSize; i++)
        {
            if(quizRes[i] == 'O') scoreTable[i+1] = scoreTable[i] + 1;
            else scoreTable[i+1] = 0;
        }
        int res = 0;
        for(int i = 0; i <= inputSize; i++)
        {
            res += scoreTable[i];
        }
        cout << res << endl;
    }
    return 0;
}