#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int index = 0;
    int value;
    cin >> value;
    for (int i = 1; i < n; i++) {
        int k;
        cin >> k;
        if (k < value) {
            value = k;
            index = i;
        }
    }
    cout << index << '\n';
    return 0;
}
