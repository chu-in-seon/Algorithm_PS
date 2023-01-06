#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    const size_t peopleSize = people.size();
    if (1 == peopleSize) {
        return 1;
    }

    sort(people.begin(), people.end(), greater<int>());
    int lp = 0;
    int rp = peopleSize - 1;
    while (lp < rp) {
        int weight = people[rp] + people[lp];
        if ( weight > limit ) {
            lp++;
        }
        else {
            lp++;
            rp--;
        }
        answer++;
    }
    if (lp == rp) { answer++; }
    return answer;
}