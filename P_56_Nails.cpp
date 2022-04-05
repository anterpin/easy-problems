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
        ll k;
        cin >> k;
        auto iter = upper_bound(v.begin(), v.end(), k);
        cout << *iter << '\n';
    }
    return 0;
}
