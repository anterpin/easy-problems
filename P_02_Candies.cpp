#include <bits/stdc++.h>
#define ln '\n'
#define MP make_pair

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> candies(n);

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        candies[i] = k;
    }
    int a, b;
    cin >> a >> b;
    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += candies[i];
    }
    cout << sum << ln;
    return 0;
}
