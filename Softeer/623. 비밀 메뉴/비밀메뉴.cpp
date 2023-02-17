#include <iostream>
#include <vector>
using namespace std;

#define NORMAL "normal"
#define SECRET "secret"

int main(int argc, char **argv)
{
    int M = 0, N = 0, K = 0;
    cin >> M >> N >> K;

    vector<int> key, command;
    key.resize(M);
    command.resize(N);
    for (int i = 0; i < M; i++) { cin >> key[i]; }
    for (int i = 0; i < N; i++) { cin >> command[i]; }

    if (M > N) {
        cout << NORMAL;
        return 0;
    }

    bool isFind = false;
    for (int i = 0; i < N; i++) {
        if (key[0] != command[i]) { continue; }

        for (int j = 1; j < M; j++) {
            if (key[j] != command[i + j]) { break; }

            if (j == M - 1) { isFind = true; }
        }

        if (true == isFind) { break; }
    }

    if (true == isFind) {
        cout << SECRET;
    }
    else {
        cout << NORMAL;
    }

    return 0;
}
