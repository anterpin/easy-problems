#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int i = 1; i < n; i++) {
            if (v[i - 1] > v[i]) {
                swap(v[i], v[i - 1]);
            }
        }
        for (int i = 0; i < n; i++) {
            cout << v[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
