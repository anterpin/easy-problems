#include <bits/stdc++.h>
#define check_vowel     \
    if (be_vowel) {     \
        cout << "NO\n"; \
        return 0;       \
    }

using namespace std;

int main() {
    string s;
    cin >> s;
    bool be_vowel = false;
    for (char c : s) {
        switch (c) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                be_vowel = false;
                break;
            case 'n':
                check_vowel;
                be_vowel = false;
                break;
            default:
                check_vowel;
                be_vowel = true;
        }
    }
    check_vowel;
    cout << "YES\n";
    return 0;
}
