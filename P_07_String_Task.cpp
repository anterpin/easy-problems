#include <bits/stdc++.h>
#define ln '\n'
#define MP make_pair

using namespace std;

int main() {
    auto isvowel = [](char c) {
        char vowels[] = {'a', 'o', 'y', 'e', 'u', 'i'};
        for (char a : vowels) {
            if (a == c)
                return true;
        }
        return false;
    };

    string str;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for (char c : str) {
        if (!isvowel(c)) {
            cout << '.' << c;
        }
    }
    cout << ln;
    return 0;
}
