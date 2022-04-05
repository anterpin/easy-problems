#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.size() & 1) {
        cout << -1 << '\n';
        return 0;
    }
    int l, d, r, u;
    l = d = r = u = 0;
    for (auto c : s) {
        switch (c) {
            case 'R':
                r++;
                break;
            case 'U':
                u++;
                break;
            case 'L':
                l++;
                break;
            case 'D':
                d++;
                break;
        }
    }
    cout << (abs(r - l) + abs(u - d)) / 2 << '\n';
    return 0;
}
