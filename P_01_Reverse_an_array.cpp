#include <bits/stdc++.h>
#define ln '\n'
#define MP make_pair

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = n - 1; i >= 0; i--) {
        int k;
        cin >> k;
        v[i] = k;
    }
    for (int e : v) {
        cout << e << " ";
    }
    cout << ln;
    return 0;
}
