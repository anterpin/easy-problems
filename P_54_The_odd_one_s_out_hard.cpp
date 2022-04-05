#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    ll sum = 0;
    while (n--) {
        ll k;
        cin >> k;
        sum ^= k;
    }
    cout << sum << '\n';
    return 0;
}
