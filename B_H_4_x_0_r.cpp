#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    vector<char> alphabet(26);
    iota(alphabet.begin(), alphabet.end(), 'a');
    alphabet['a' - 'a'] = '4';
    alphabet['i' - 'a'] = '1';
    alphabet['e' - 'a'] = '3';
    alphabet['o' - 'a'] = '0';
    alphabet['s' - 'a'] = '5';
    cin >> s;
    for (auto& c : s) {
        c = alphabet[c - 'a'];
    }
    cout << s << '\n';
    return 0;
}
