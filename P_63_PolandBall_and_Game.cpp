#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    unordered_set<string> s;
    for (int i = 0; i < n + m; i++) {
        string str;
        cin >> str;
        s.insert(str);
    }
    if (n + s.size() % 2 > m) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
