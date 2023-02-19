/**    
    @file    14681 - Quadrant Selection.cpp
    @date    2021/05/04
    @author  ischu
    @brief
*/

#include <iostream>

using namespace std;

bool IsNegative(int num)
{
    if (0 < num)
    {
        return true;
    }

    return false;
}

int main()
{
    int x = 0, y = 0, result = 0;
    cin >> x;
    cin >> y;

    if (false == IsNegative(x))
    {
        if (false == IsNegative(y))
        {
            result = 3;
        }
        else
        {
            result = 2;
        }
    }
    else
    {
        if (false == IsNegative(y))
        {
            result = 4;
        }
        else
        {
            result = 1;
        }
    }

    cout << result;

    return 0;
}