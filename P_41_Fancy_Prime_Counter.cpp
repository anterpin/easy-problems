#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
    int n = 300000;
    int q;
    cin >> q;
    vector<int> primes(n + 1, 1);
    primes[0] = 0;  // 0 is not prime
    primes[1] = 0;  // 1 is not prime
    for (int i = 2; i * i <= n; i++) {
        if (primes[i] != 1)
            continue;
        for (int j = 2; j * i <= n; j++) {
            primes[j * i]++;
        }
    }
    vector<lli> sum(n + 1);
    sum[0] = 0;
    for (int i = 1; i <= n; i++) {
        int isprime = primes[i] == 1 ? 1 : 0;
        sum[i] = isprime + sum[i - 1];
    }

    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << sum[b] - sum[a - 1] << '\n';
    }

    return 0;
}
