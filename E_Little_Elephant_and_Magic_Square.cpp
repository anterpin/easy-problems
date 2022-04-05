#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v(9);
    for (auto& i : v) {
        cin >> i;
    }
    int& x = v[0];
    x = v[3] + 2 * v[5] - v[1];
    x /= 2;
    int sum = x + v[1] + v[2];
    v[4] = sum - v[3] - v[5];
    v[8] = sum - v[6] - v[7];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << v[i * 3 + j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
