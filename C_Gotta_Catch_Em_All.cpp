#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_set<ll> s;
    while (n--) {
        ll k;
        cin >> k;
        s.insert(k);
        cout << s.size() << ' ';
    }
    cout << '\n';
    return 0;
}
