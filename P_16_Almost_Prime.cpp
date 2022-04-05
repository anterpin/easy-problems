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
    vector<int> factors(n, 0);
    for (int i = 2; i <= n; i++) {
        if (!primes[i - 1])
            continue;
        for (int j = 1; j * i <= n; j++) {
            factors[j * i - 1]++;
        }
    }
    int sum = 0;
    for (auto iter = factors.begin(); iter != factors.end(); iter++) {
        if (*iter == 2) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
