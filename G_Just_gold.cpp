#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> g, b, s;
    for (int i = 1; i <= n; i++) {
        char c;
        cin >> c;
        if (c == 'G')
            g.push_back(i);
        else if (c == 'B') {
            b.push_back(i);
        } else {
            s.push_back(i);
        }
    }
    array<vector<int>*, 3> arr{&g, &s, &b};
    string str = "GSB";
    while (q--) {
        int x, y;
        cin >> x >> y;
        for (int i = 0; i < arr.size(); i++) {
            auto a = arr[i];
            auto xpos = lower_bound(a->begin(), a->end(), x);
            auto ypos = upper_bound(a->begin(), a->end(), y);
            if (xpos == ypos) {
                continue;
            }
            cout << str[i] << '\n';
            break;
        }
    }
    return 0;
}
