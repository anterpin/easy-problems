#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        v[i] = c - '0';
        sum += v[i];
    }
    for (int a = 2; a <= n; a++) {
        if (sum % a != 0)
            continue;
        int b = sum / a;
        int sum = 0;
        int times = 0;
        for (int i = 0; i < n; i++) {
            sum += v[i];
            if (sum < b) {
                continue;
            }
            if (sum == b) {
                sum = 0;
                times++;
            } else {
                goto out;
            }
        }
        if (sum == 0 && times == a) {
            cout << "YES\n";
            return 0;
        }

    out:;
    }
    cout << "NO\n";
    return 0;
}
