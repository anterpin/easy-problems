#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<ll, int> s;
    while (n--) {
        ll k;
        cin >> k;
        s[k]++;
    }
    for (auto p : s) {
        int i = p.first;
        if (p.second % 2 != 0) {
            cout << i << '\n';
        }
    }
    return 0;
}
