#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
    int n;
    cin >> n;
    lli mi, ma;
    cin >> ma;
    mi = ma;
    for (int i = 1; i < n; i++) {
        lli k;
        cin >> k;
        mi = min(mi, k);
        ma = max(ma, k);
    }
    int before = ma + 1 - mi;
    cout << before - n << endl;

    return 0;
}
