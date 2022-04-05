#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    auto a = v.begin();
    auto b = v.end() - 1;
    while (a < b) {
        int sum = *a + *b;
        if (sum == x) {
            cout << "YES\n";
            return 0;
        }
        if (sum < x) {
            a++;
        } else {
            b--;
        }
    }
    cout << "NO\n";
    return 0;
}
