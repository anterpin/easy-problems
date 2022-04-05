#include <bits/stdc++.h>
#define ulli unsigned long long int
using namespace std;

int main() {
    ulli n;
    cin >> n;
    while (n != 1) {
        cout << n << '\n';
        if (n % 2 == 0) {
            n >>= 1;
        } else {
            n = 3 * n + 1;
        }
    }
    cout << n << '\n';
    return 0;
}
