#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<bool> v(n, false);
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        v[k - 1] = true;
    }
    for (bool b : v) {
        if (!b) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}
