#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    int start = -1;
    int end = s.size();
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != 'a' && start == -1) {
            start = i;
        }
        if (s[i] == 'a' && start != -1) {
            end = i;
            break;
        }
    }
    if (start == -1)
        start = s.size() - 1;
    for (int i = start; i < end; i++) {
        char c = 'a' + (s[i] + 25 - 'a') % 26;
        s[i] = c;
    }
    cout << s << '\n';
    return 0;
}
