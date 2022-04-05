#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    n -= 1;
    cout << 1 << ' ';
    int k = n % 3;
    if (n % 3 == 0 || n % 3 == 2) {
        cout << 1 << ' ' << n - 1 << '\n';
    } else {
        cout << 2 << ' ' << n - 2 << '\n';
    }
}
