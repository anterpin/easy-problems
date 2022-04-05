#include <bits/stdc++.h>
#define ln '\n'
#define MP make_pair

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size() - 7;

    for (int i = 0; i <= n; i++) {
        for (int j = 1; j < 7; j++) {
            if (s[i] != s[i + j])
                goto out;
        }
        cout << "YES" << ln;
        return 0;
    out:;
    }
    cout << "NO" << ln;
    return 0;
}
