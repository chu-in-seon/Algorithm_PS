#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    for (const char item : my_string) {
        answer.insert(answer.end(), n, item);
    }
    return answer;
}