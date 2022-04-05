#include <bits/stdc++.h>
#define ulli unsigned long long int
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    ulli x = 0;
    for (int i = 0; i < n / 2; i++) {
        x += v[i];
    }
    ulli y = 0;
    for (int i = n / 2; i < n; i++) {
        y += v[i];
    }
    cout << x * x + y * y << '\n';
    return 0;
}
