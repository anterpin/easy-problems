#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum = a + b + c + d;
    int rank = 1;
    for (int i = 2; i <= n; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int s = a + b + c + d;

        if (sum < s) {
            rank++;
        }
    }
    cout << rank << '\n';

    return 0;
}
