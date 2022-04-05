#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    unordered_set<int> s;
    vector<ull> sum(n);
    for (int i = n - 1; i >= 0; i--) {
        s.insert(v[i]);
        sum[i] = s.size();
    }
    while (m--) {
        int l;
        cin >> l;
        cout << sum[l - 1] << '\n';
    }
    return 0;
}
