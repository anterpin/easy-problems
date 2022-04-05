#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main() {
    exit(0);
    int n, k, m;
    cin >> n >> k >> m;
    vector<string> words(n);
    vector<ull> costs(n);
    unordered_map<string, int> group_table;
    vector<vector<int>> groups(k);
    for (int i = 0; i < n; i++) {
        cin >> words[i];
        group_table[words[i]] = i;
    }
    for (int i = 0; i < n; i++) {
        cin >> costs[i];
    }
    for (int i = 0; i < k; i++) {
        int t;
        cin >> t;
        groups[i].resize(t);
        for (int j = 0; j < t; j++) {
            int& word_id = groups[i][j];
            cin >> word_id;
            word_id -= 1;
            group_table[words[word_id]] = i;
        }
        sort(groups[i].begin(), groups[i].end(),
             [&](int a, int b) { return costs[a] < costs[b]; });
    }
    ull sum = 0;
    for (int i = 0; i < m; i++) {
        string word;
        cin >> word;
        int group = group_table[word];
        sum += costs[groups[group][0]];
    }
    cout << sum << '\n';

    return 0;
}
