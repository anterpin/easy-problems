#include <bits/stdc++.h>
#define lli long long int
#define MOD (lli)(1e9 + 7)

using namespace std;

int main() {
    lli x, y, n;
    cin >> x >> y >> n;
    lli i = (n - 1) % 6;
    lli number;
    switch (i) {
        case 0:
            number = x;
            break;
        case 1:
            number = y;
            break;
        case 2:
            number = ((y % MOD) - (x % MOD)) % MOD;
            break;
        case 3:
            number = -x;
            break;
        case 4:
            number = -y;
            break;
        case 5:
            number = ((x % MOD) - (y % MOD)) % MOD;
            break;
    }
    if (number < 0)
        number = MOD + number;
    cout << number << endl;
    return 0;
}
