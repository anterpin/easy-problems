#include <bits/stdc++.h>

using namespace std;

bool is_repeated(const string& str, size_t length) {
    if (str.size() & 1) {
        return false;
    }
    if ((str.size() >> 1) > length) {
        return false;
    }
    for (size_t i = 0; i < (str.size() >> 1); i++) {
        if (str[i] != str[(str.size() >> 1) + i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    cin >> str;
    string s;
    int index = 0;
    for (int i = 0; i < str.size(); i++) {
        char c = str[i];
        if (c != 'a') {
            s += c;
        } else {
            index = i + 1;
        }
    }
    if (is_repeated(s, str.size() - index)) {
        cout << str.substr(0, str.size() - (s.size() >> 1)) << '\n';
    } else {
        cout << ":(\n";
    }
    return 0;
}
