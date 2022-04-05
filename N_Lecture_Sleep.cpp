#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i] * v[i];
    }
    ll interval = 0;
    for (int i = 0; i < k; i++) {
        interval += (1 - a[i]) * v[i];
    }
    ll m = sum + interval;
    for (int i = k; i < n; i++) {
        if (!a[i - k]) {
            interval -= v[i - k];
        }
        if (!a[i]) {
            interval += v[i];
        }
        m = max(m, sum + interval);
    }
    cout << m << '\n';
    return 0;
}
