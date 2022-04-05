#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int sum = 1;
    int prev = v[0];
    if (v[0] - 1 > 0) {
        prev = v[0] - 1;
    }

    for (int i = 1; i < n; i++) {
        if (prev < v[i] - 1) {
            prev = v[i] - 1;
            sum++;
            continue;
        }
        if (prev < v[i]) {
            prev = v[i];
            sum++;
            continue;
        }
        if (prev < v[i] + 1) {
            prev = v[i] + 1;
            sum++;
            continue;
        }
    }
    cout << sum << '\n';
    return 0;
}
