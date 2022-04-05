#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<string, long long int> memo;
    long long int INF = (long long int)1e9;
    memo["A"] = memo["B"] = memo["C"] = INF;
    memo["AB"] = memo["BC"] = memo["AC"] = INF;
    memo["ABC"] = INF;

    for (int i = 0; i < n; i++) {
        long long int k;
        string s;
        cin >> k >> s;
        sort(s.begin(), s.end());
        memo[s] = min(k, memo[s]);
    }
    long long int m = memo["A"] + memo["B"] + memo["C"];
    m = min(memo["AB"] + memo["C"], m);
    m = min(memo["A"] + memo["BC"], m);
    m = min(memo["AC"] + memo["B"], m);
    m = min(memo["AB"] + memo["AC"], m);
    m = min(memo["AB"] + memo["BC"], m);
    m = min(memo["AC"] + memo["BC"], m);
    m = min(memo["ABC"], m);
    if (m >= INF) {
        m = -1;
    }
    cout << m << '\n';
    return 0;
}
