#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;
        auto pos = upper_bound(v.begin(), v.end(), k);
        cout << (distance(v.begin(), pos)) << ' ';
    }
    cout << '\n';
    return 0;
}
