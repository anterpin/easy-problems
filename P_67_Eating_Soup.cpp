#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int leven = n & 1 ? n - 1 : n;
    if (m == 0) {
        cout << 1 << '\n';
    } else if (m <= leven / 2) {
        cout << m << '\n';
    } else {
        cout << n - m << '\n';
    }
    return 0;
}
