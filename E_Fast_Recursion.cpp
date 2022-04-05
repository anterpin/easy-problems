#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll cache[1001];

ll cnt(int n) {
    if (n == 0) {
        return 1;
    }
    if (cache[n] != -1) {
        return cache[n];
    }
    ll value = cnt(n - 1) + cnt(n / 2) + cnt(n / 3);
    cache[n] = value;
    return value;
}
int main() {
    int n;
    cin >> n;
    fill(cache, cache + 1001, -1);
    cout << cnt(n) << endl;
    return 0;
}