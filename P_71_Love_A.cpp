#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin >> str;
    int sum = 0;
    int nna = 0;
    for (auto c : str) {
        if (c != 'a')
            nna++;
    }
    int na = str.size() - nna;
    cout << str.size() - max(nna + 1 - na, 0);
    // na = 4
    // nna = 3
    // size - max(nna+1-na,0)
    return 0;
}
