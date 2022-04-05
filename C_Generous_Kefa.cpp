#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(26, 0);
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        v[c - 'a']++;
    }
    for (int i : v) {
        if (k < i) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";

    return 0;
}
