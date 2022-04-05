#include <bits/stdc++.h>

using namespace std;

struct value {
    int times, start, end;
    int size() const { return end - start; }
};
int main() {
    int n;
    cin >> n;
    unordered_map<int, value> m;
    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        if (m.count(k) != 0) {
            auto& v = m[k];
            v.times++;
            v.end = i;
        } else {
            value v = {0, i, i};
            m[k] = v;
        }
    }
    value ma = {0, 0, 0};
    for (const auto& p : m) {
        const value& v = p.second;
        if (ma.times == v.times && v.size() <= ma.size()) {
            ma = v;
        } else if (ma.times < v.times) {
            ma = v;
        }
    }
    cout << ma.start << ' ' << ma.end << '\n';
    return 0;
}
