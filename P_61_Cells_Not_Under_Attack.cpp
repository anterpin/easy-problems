#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;
    unordered_set<int> rows;
    unordered_set<int> cols;
    while (m--) {
        int i, j;
        cin >> i >> j;
        rows.insert(i);
        cols.insert(j);
        cout << (n - rows.size()) * (n - cols.size()) << ' ';
    }
    cout << '\n';
    return 0;
}
