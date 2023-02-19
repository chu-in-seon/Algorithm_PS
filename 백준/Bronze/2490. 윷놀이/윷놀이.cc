#include <iostream>

using namespace std;

int main()
{
    short count = 3, frontOrEnd = 0, res = 0;
    while(count--)
    {
        for(short i = 0; i < 4; i++)
        {
            cin >> frontOrEnd;
            if (!frontOrEnd)
            {
                res++;
            }
        }
        switch (res) {
            case 0:
                cout << 'E' << endl;
                break;
            case 1:
                cout << 'A' << endl;
                break;
            case 2:
                cout << 'B' << endl;
                break;
            case 3:
                cout << 'C' << endl;
                break;
            case 4:
                cout << 'D' << endl;
                break;
        }
        res = 0;
    }
    return 0;
}
