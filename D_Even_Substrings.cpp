#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        char c;
        cin >> c;
        if ((c - '0') % 2 == 0) {
            sum += i;
        }
    }
    cout << sum << '\n';

    return 0;
}
