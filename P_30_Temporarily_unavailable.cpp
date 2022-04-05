#include <bits/stdc++.h>
#define MP make_pair

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a, b, c, r;
        cin >> a >> b >> c >> r;
        vector<pair<int, bool>> v{MP(a, true), MP(b, true), MP(c - r, false),
                                  MP(c + r, false)};
        sort(v.begin(), v.end(), [](pair<int, bool> a, pair<int, bool> b) {
            return a.first < b.first;
        });

        int sum = 0;
        bool region = true;
        bool count = false;

        for (int i = 0; i < 3; i++) {
            if (!v[i].second) {
                region = !region;
            } else {
                count = !count;
            }
            if (count && region) {
                sum += v[i + 1].first - v[i].first;
            }
        }
        cout << sum << '\n';
    }
    return 0;
}
