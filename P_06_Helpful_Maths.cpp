#include <bits/stdc++.h>
#define ln '\n'
#define MP make_pair

using namespace std;

#define dtoi(d) char(d) - '0'

int main() {
    string s;
    cin >> s;

    int v[3] = {0};
    for (auto iter = s.begin(); iter < s.end(); iter += 2) {
        v[dtoi(*iter) - 1]++;
    }
    bool first = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < v[i]; j++) {
            if (first) {
                cout << i + 1;
                first = false;
                continue;
            }
            cout << '+' << i + 1;
        }
    }
    cout << ln;
    return 0;
}
