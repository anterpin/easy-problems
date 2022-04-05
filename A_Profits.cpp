#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
    lli n, x;
    cin >> n >> x;
    lli sum = 0;
    for (lli i = 0; i < n; i++) {
        lli k;
        cin >> k;
        sum += k;
        if (x <= sum) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
