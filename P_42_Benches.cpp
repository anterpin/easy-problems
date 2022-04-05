#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);

    cin >> v[0];
    int ma = v[0];
    int sum = v[0];

    for (int i = 1; i < n; i++) {
        cin >> v[i];
        ma = max(v[i], ma);
        sum += v[i];
    }
    int c = ceil((double)(sum + m) / (double)n);
    cout << max(c, ma) << ' ' << ma + m << '\n';
    return 0;
}
