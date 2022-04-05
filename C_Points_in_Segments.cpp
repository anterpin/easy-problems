#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(m + 1, 0);
    while (n--) {
        int a, b;
        cin >> a >> b;
        v[a - 1]++;
        v[b]--;
    }
    int sum = 0;
    vector<int> points;
    for (int i = 0; i < v.size() - 1; i++) {
        sum += v[i];
        if (sum == 0) {
            points.push_back(i + 1);
        }
    }
    cout << points.size() << '\n';
    for (auto p : points) {
        cout << p << ' ';
    }
    cout << '\n';
    return 0;
}
