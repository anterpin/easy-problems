#include <bits/stdc++.h>
#define ln '\n'
#define MP make_pair

using namespace std;

int main() {
    string astr, bstr;
    cin >> astr >> bstr;
    for (int i = 0; i < astr.size(); i++) {
        char a = islower(astr[i]) ? astr[i] - ' ' : astr[i];
        char b = islower(bstr[i]) ? bstr[i] - ' ' : bstr[i];

        if (a == b)
            continue;
        else if (a < b) {
            cout << -1 << ln;
            return 0;
        } else {
            cout << 1 << ln;
            return 0;
        }
    }
    cout << 0 << ln;
    return 0;
}
