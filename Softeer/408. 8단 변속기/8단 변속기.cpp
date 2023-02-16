#include<iostream>
#include<cstdio>
#include<string>

#define MAX_DCT_LEVEL 8
#define ASC "ascending"
#define DES "descending"
#define MIX "mixed"

using namespace std;

int inpArr[MAX_DCT_LEVEL] = {0, };
int main(int argc, char** argv)
{
	string inpStr;
	getline(cin, inpStr);
    sscanf(inpStr.c_str(), "%d %d %d %d %d %d %d %d", 
        &inpArr[0], &inpArr[1], &inpArr[2], &inpArr[3],
        &inpArr[4] ,&inpArr[5], &inpArr[6], &inpArr[7]);

    string result = DES;
    int diff = inpArr[0] - inpArr[1];
    if( -1 == diff ) {
        result = ASC;
    }
    for (int idx = 1; idx < MAX_DCT_LEVEL - 1; idx++) {
        if (diff != inpArr[idx] - inpArr[idx + 1]) {
            result = MIX;
            break;
        }
    }

    cout << result;
	return 0;
}
