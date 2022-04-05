#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n, 0);
    while (m--) {
        int k;
        cin >> k;
        v[k - 1]++;
    }
    int points = v[0];
    for (int i = 1; i < n; i++) {
        points = min(points, v[i]);
    }
    cout << points << '\n';
    return 0;
}
