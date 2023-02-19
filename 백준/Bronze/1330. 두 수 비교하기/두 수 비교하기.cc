#include<iostream>
using namespace std;
int main()
{
    int numA = 0, numB = 0;
    cin >> numA >> numB;
    if (numA > numB)
    {
        cout << '>';
    }
    else if(numA < numB)
    {
        cout << '<';
    }
    else 
    {
        cout << "==";
    }
    return 0;
}