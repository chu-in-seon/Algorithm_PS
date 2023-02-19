#include <iostream>
#include <string>
#include <vector>
using namespace std;

static const string PUSH = "push";
static const string POP = "pop";
static const string TOP = "top";
static const string SIZE = "size";
static const string EMPTY = "empty";


int main()
{
    ::ios::sync_with_stdio(false);
    
    int commands = 0;
    cin >> commands;
    vector<uint> stack;
    for (int idx = 0; idx < commands; idx++)
    {
        std::string cmd = "";
        cin >> cmd;
        if (0 == cmd.compare(PUSH))
        {
            uint val = 0;
            cin >> val;
            stack.push_back(val);
        }
        else if (0 == cmd.compare(POP))
        {
            if (false == stack.empty())
            {
                uint val = stack.back();
                cout << val << '\n';
                stack.pop_back();
            }
            else
            {
                cout << -1 << '\n';
            }
        }
        else if (0 == cmd.compare(TOP))
        {
            if (false == stack.empty())
            {
                uint val = stack.back();
                cout << val << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
        }
        else if (0 == cmd.compare(SIZE))
        {
            size_t val = stack.size();
            cout << val << '\n';
        }
        else if (0 == cmd.compare(EMPTY))
        {
            bool val = stack.empty();
            cout << val << '\n';
        }
    }
    
    return 0;
}
