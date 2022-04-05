#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<unsigned long long int> sum(n + 1);
    sum[0] = 0;
    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        sum[i] = sum[i - 1] + k;
    }
    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << sum[b + 1] - sum[a] << '\n';
    }

    return 0;
}
