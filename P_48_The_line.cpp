#include <bits/stdc++.h>
#define ulli unsigned long long int
using namespace std;

int main() {
    ulli n, p;
    cin >> n >> p;
    ulli sum = 0;
    ulli a = 0;
    ulli b = 1;
    for (int i = 0; i < n; i++) {
        swap(a, b);
        b = (a + b) % p;
    }
    cout << b << '\n';
    return 0;
}
