#include<iostream>
using namespace std;
int main()
{
    unsigned int firstVal = 0, secondVal = 0;
    cin >> firstVal >> secondVal;
    int firstToken = 0, secondToken = 0, thirdToken = 0, tempVal = secondVal;
    firstToken = tempVal / 100;
    tempVal %= 100; 
    secondToken = tempVal / 10;
    thirdToken = tempVal % 10;
    cout << firstVal * thirdToken << '\n' << firstVal * secondToken << '\n' << firstVal * firstToken << '\n' << firstVal * secondVal;
    return 0;
}