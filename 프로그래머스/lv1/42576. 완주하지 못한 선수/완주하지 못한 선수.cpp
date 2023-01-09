#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    map<string, int> participantSet;
    for (const string &name : participant) {
        if (participantSet.end() != participantSet.find(name)) {
            participantSet[name]++;
        }
        else {
            participantSet.insert({name, 1});
        }
    }

    for (const string &name : completion) {
        participantSet[name]--;
    }

    string answer = "";
    for (const string &name : participant) {
        if (0 !=participantSet[name]) {
            answer = name;
            break;
        }
    }
    return answer;
}