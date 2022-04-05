#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<bool> primes(n, true);
    primes[0] = false;
    for (int i = 2; i * i <= n; i++) {
        for (int j = 2; j * i <= n; j++) {
            primes[j * i - 1] = false;
        }
    }
    int count = 0;
    for (int i = 0; i < primes.size(); i++) {
        if (primes[i])
            count++;
    }
    cout << count << '\n';
    for (int i = 0; i < primes.size(); i++) {
        if (primes[i])
            cout << i + 1 << " ";
    }

    cout << '\n';

    return 0;
}
