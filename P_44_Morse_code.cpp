#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<lli> v(n + 1, 1);
    for (int i = 2; i <= n; i++) {
        v[i] = v[i - 1] + v[i - 2];
    }
    cout << v[n] << '\n';
    return 0;
}
