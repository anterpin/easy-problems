#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int prev;
    cin >> prev;
    int prev_sum = 0;
    int sum = 1;
    int m = 0;
    for (int i = 1; i < n; i++) {
        int k;
        cin >> k;
        if (k != prev) {
            m = max(min(prev_sum, sum) * 2, m);
            prev_sum = sum;
            sum = 1;
        } else {
            sum++;
        }
        prev = k;
    }
    m = max(min(prev_sum, sum) * 2, m);

    cout << m << '\n';
    return 0;
}
