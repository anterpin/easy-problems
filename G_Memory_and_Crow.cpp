#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    // ai = bi - bi + 1 + bi + 2 - bi + 3....
    // ai = bi - ai+1
    // bi = ai + ai+1
    // bn = an
    int n;
    cin >> n;
    vector<ll> v(n);
    for (auto& a : v) {
        cin >> a;
    }
    ll prev = 0;
    for (int i = n - 1; i >= 0; i--) {
        swap(prev, v[i]);
        v[i] = v[i] + prev;
    }
    for (auto i : v) {
        cout << i << ' ';
    }
    cout << '\n';

    return 0;
}
