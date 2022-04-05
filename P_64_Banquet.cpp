#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_set<string> s;
    while (n--) {
        string e, a, b;
        cin >> e >> a >> b;
        if (e == "?") {
            if (s.count(a) && s.count(b)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else if (e == "+") {
            s.insert(a);
            s.insert(b);
        } else {  // -
            s.erase(a);
            s.erase(b);
        }
    }
    return 0;
}
