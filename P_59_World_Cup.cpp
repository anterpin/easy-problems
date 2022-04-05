#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<ll> v(n);
    cin >> v[0];
    ll m = v[0];
    for (int i = 1; i < n; i++) {
        ll k;
        cin >> k;
        v[i] = k - i;
        m = min(m, v[i]);
    }
    ll times = m / n;
    if (m % n != 0 && m > 0)
        times++;
    for (int i = 0; i < n; i++) {
        v[i] -= times * n;
        if (v[i] <= 0) {
            cout << i + 1 << '\n';
            break;
        }
    }
    cout << endl;
    return 0;
}
