#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string colors = "ROYGBIV";
    string s;

    for (int i = 0; i < (n - (n % 7)); i++) {
        s += colors[i % 7];
    }
    for (int i = 0; i < n % 7; i++) {
        s += s[s.size() - 4];
    }
    cout << s << '\n';
    return 0;
}
