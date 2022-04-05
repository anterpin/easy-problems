#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<bool> primes(n, true);
    primes[0] = false;  // 1 is not prime
    for (int i = 2; i * i <= n; i++) {
        if (!primes[i - 1])
            continue;
        for (int j = i * i; j <= n; j += i) {
            primes[j - 1] = false;
        }
    }
    int sum = 0;
    for (int i = 3; i <= n; i++) {
        if (primes[i - 1] && primes[i - 3])
            sum++;
    }
    cout << sum << '\n';
    return 0;
}
