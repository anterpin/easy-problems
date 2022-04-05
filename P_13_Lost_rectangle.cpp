#include <bits/stdc++.h>
#define ln '\n'
#define lli long long int
using namespace std;

int main() {
    lli A;
    cin >> A;
    for (lli a = sqrt(A); a >= 1; a--) {
        if (A % a != 0)
            continue;
        lli b = A / a;
        cout << 2 * (a + b) << ln;
        break;
    }
    return 0;
}
