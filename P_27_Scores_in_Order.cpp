#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        v.emplace_back(k);

        for (int i = int(v.size()) - 2; i >= 0; i--) {
            if (v[i + 1] > v[i]) {
                swap(v[i + 1], v[i]);
            } else {
                cout << i + 2 << '\n';
                goto out;
            }
        }
        cout << 1 << '\n';
    out:;
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }
    cout << '\n';
    return 0;
}
