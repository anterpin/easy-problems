#include <bits/stdc++.h>

using namespace std;

int main() {
    int times;
    cin >> times;
    for (int t = 0; t < times; t++) {
        int m;
        cin >> m;
        int sum = m;
        for (int i = 1; i < 3; i++) {
            int k;
            cin >> k;
            m = max(m, k);
            sum += k;
        }
        sum -= m;
        if (sum + 1 < m)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
    return 0;
}
