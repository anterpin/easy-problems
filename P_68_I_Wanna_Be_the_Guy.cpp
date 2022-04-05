#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<bool> v(n, false);
    for (int i = 0; i < 2; i++) {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++) {
            int k;
            cin >> k;
            v[k - 1] = true;
        }
    }
    for (bool e : v) {
        if (!e) {
            cout << "Oh, my keyboard!\n";
            return 0;
        }
    }
    cout << "I become the guy.\n";
    return 0;
}
