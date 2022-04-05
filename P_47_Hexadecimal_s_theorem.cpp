#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << "0 0 1\n";
        return 0;
    }
    int a, b, c = 1;
    a = b = 0;
    while (b + c < n) {
        a = b;
        swap(b, c);
        c = b + c;
    }
    // b + c = n
    // a + b = c
    // b + b + a = n

    cout << a << " " << b << " " << b << '\n';
    return 0;
}
