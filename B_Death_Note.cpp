#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int ln = 0;
    while (n--) {
        int k;
        cin >> k;
        cout << (ln + k) / m << ' ';
        ln = (ln + k) % m;
    }
    cout << '\n';
    return 0;
}
