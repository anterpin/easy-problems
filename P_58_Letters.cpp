#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<ll> v(n);
    vector<ll> rooms(n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        ll k;
        cin >> k;
        sum += k;
        rooms[i] = k;
        v[i] = sum;
    }
    while (q--) {
        ll k;
        cin >> k;
        auto pos = lower_bound(v.begin(), v.end(), k);
        int i = distance(v.begin(), pos);
        ll room = k - *pos + rooms[i];
        cout << i + 1 << " " << room << '\n';
    }
    return 0;
}
