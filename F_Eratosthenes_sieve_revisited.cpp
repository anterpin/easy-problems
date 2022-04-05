#include <bits/stdc++.h>
using namespace std;

int main() {
    size_t a, b;
    cin >> a >> b;
    vector<bool> v(b + 1 - a, true);
    size_t sqa = sqrt(a);
    for (size_t i = 2; i * i <= b; i += 1) {
        size_t start;
        if (a < i) {
            start = i;
        } else {
            start = a / i;
            if (a % i)
                start++;
        }
        for (size_t j = start * i; j <= b; j += i) {
            v[j - a] = false;
        }
    }
    if (a == 1) {
        v[0] = false;
    }
    cout << endl;
    size_t sum = 0;
    for (size_t i = 0; i < b - a + 1; i++) {
        if (v[i]) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
