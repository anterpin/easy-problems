#include <bits/stdc++.h>

using namespace std;

int main() {
    char col;
    int r, c;
    cin >> col >> r;
    r -= 1;
    c = col - 'a';
    if (c % 7 == 0 && r % 7 == 0) {
        cout << 3 << endl;
    } else if (c % 7 == 0 || r % 7 == 0) {
        cout << 5 << endl;
    } else {
        cout << 8 << endl;
    }
    return 0;
}
