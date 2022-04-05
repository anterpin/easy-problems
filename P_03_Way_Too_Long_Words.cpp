#include <bits/stdc++.h>
#define ln '\n'
#define MP make_pair

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s.size() <= 10) {
            cout << s << ln;
        } else {
            stringstream ss;
            ss << s[0] << s.size() - 2 << s.back();
            cout << ss.str() << ln;
        }
    }
    return 0;
}
