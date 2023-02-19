#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
struct info {
    int age;
    string name;
    int ord;
    info(int age, string name, int ord) {
        this->age = age;
        this->name = name;
        this->ord = ord;
    }
};
bool operator<(const info &a, const info &b) {
    if(a.age == b.age)
        return a.ord < b.ord;
    return a.age < b.age;
}
vector<info> v;
int main() {
    ios::sync_with_stdio(false);
    int N = 0, age = 0, ord = 0;
    string name;
    cin >> N;
    while(N--) {
        cin >> age >> name;
        v.push_back(info(age, name, ord++));
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++) {
        cout << v[i].age << " " << v[i].name << "\n";
    }

    return 0;
}