#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    string d = a + b;
    sort(d.begin(), d.end());
    sort(c.begin(), c.end());
    if (d != c) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }

    return 0;
}
