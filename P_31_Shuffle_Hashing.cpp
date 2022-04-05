#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pass, hash;
        cin >> pass >> hash;
        sort(pass.begin(), pass.end());
        for (int i = 0; i <= int(hash.size()) - int(pass.size()); i++) {
            string s = hash.substr(i, pass.size());
            sort(s.begin(), s.end());
            if (s == pass) {
                cout << "YES\n";
                goto out;
            }
        }
        cout << "NO\n";
    out:;
    }
    return 0;
}
