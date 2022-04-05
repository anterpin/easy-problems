#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int main() {
    int n;
    cin >> n;
    lli p = 1;
    for (int i = 1; i <= n; i++) {
        p *= i;
    }
    lli sum = 0;
    for (int i = 0; i < n; i++) {
        int a = i + 1;
        int b = (i + 1) % n + 1;
        sum += p / (a * b);
    }
    cout << sum << '\n';
    return 0;
}
