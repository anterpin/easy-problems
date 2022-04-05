#include <bits/stdc++.h>
#define ln '\n'

using namespace std;

int main() {
    int n;
    cin >> n;
    int n8 = 0;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        if (c == '8')
            n8++;
    }
    cout << min(n / 11, n8) << ln;
    return 0;
}
