#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int m = 1;
    int index = 0;
    int skip = 0;
    while (m < n) {
        int next = m << 1;
        for (int i = index; i < n; i += next) {
            if (is_sorted(v.begin() + i + skip, v.begin() + i + next)) {
                if (index % (next << 1) == 0) {
                    skip = next - 1;
                } else {
                    index = i + next;
                    skip = 0;
                }
                goto out;
            }
            index = i + next;
            skip = 0;
        }
        break;
    out:
        m = next;
    }
    cout << m << '\n';
    return 0;
}
