#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int q;
    cin >> q;
    while (q--) {
        ll x;
        cin >> x;
        auto p = equal_range(v.begin(), v.end(), x);
        if (p.first + 1 == p.second) {
            cout << distance(v.begin(), p.first) << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
    return 0;
}
