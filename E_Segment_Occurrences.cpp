#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<int>> f(n + 1, vector<int>(n + 1, 0));
    string s, t;
    cin >> s >> t;

    // f(a,b) = f(a,b-1) + eq(s[b-t.size(),b],t);
    // s = "abab"
    // t = "ab"
    //   0 1 2 3 4
    // 0 . . 1 1 2
    // 1 . . . 0 1
    // 2 . . . . 1

    for (int a = 0; a <= n - m; a++) {
        for (int b = a + m; b <= n; b++) {
            int new_occ = (s.compare(b - m, m, t) == 0) ? 1 : 0;
            f[a][b] = f[a][b - 1] + new_occ;
        }
    }
    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << f[a - 1][b] << '\n';
    }

    return 0;
}
