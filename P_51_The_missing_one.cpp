#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int missing = 0;
    for (int i = 1; i < n; i++) {
        int k;
        cin >> k;
        missing += i - k;
    }
    missing += n;
    cout << missing << '\n';
    return 0;
}
