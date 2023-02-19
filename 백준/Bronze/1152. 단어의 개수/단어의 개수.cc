#include <iostream>
#include <string>

using namespace std;

int main()
{
    string inputToken;
    getline(cin, inputToken);
    
    int wordsCnt = 1;
    for (int i = 0; i < inputToken.length(); i++)
    {
        if(inputToken[i] == ' ') {
            wordsCnt++;
        }
    }
    
    if(inputToken[0] == ' ') { wordsCnt--; }
    if(inputToken[inputToken.size()-1] == ' ') { wordsCnt--; }
    
    cout << wordsCnt << endl;
    
    return 0;
}