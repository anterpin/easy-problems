#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> m(26, 0);
    while (n--) {
        char c;
        cin >> c;
        m[c - 'A']++;
    }
    sort(m.begin(), m.end());
    ll sum = 0;
    for (int i = 25; k > 0; i--) {
        ll c = min(k, m[i]);
        sum += c * c;
        k = k - m[i];
    }
    cout << sum << '\n';
    return 0;
}
