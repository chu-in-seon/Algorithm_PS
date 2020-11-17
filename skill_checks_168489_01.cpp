#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int cons = 0;
    int answer = 0;

    sort(d.begin(), d.end());
    for( int item : d) {
        cons += item;
        if(cons > budget) {
            break;
        }
        answer++;
    }
    return answer;
}