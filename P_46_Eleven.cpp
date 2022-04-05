#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s(n, 'o');
    int a = 1;
    int b = 1;
    while (b <= n) {
        s[b - 1] = 'O';
        swap(a, b);
        b = a + b;
    }
    cout << s << '\n';
    return 0;
}
