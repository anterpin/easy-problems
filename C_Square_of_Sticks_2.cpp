#include <bits/stdc++.h>
#define ulli unsigned long long int
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<ulli> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ulli edge = 0;
    if (v.size() >= 4)
        edge = v[v.size() - 4];
    cout << edge * edge << '\n';
    return 0;
}
