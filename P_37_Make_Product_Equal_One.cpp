#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main() {
    lli n;
    cin >> n;
    bool parity = false;
    bool zero = false;
    lli count = 0;
    while (n--) {
        lli c;
        cin >> c;
        if (c == 0)
            zero = true;
        if (c < 0) {
            parity = !parity;
        }
        count += abs(abs(c) - 1);
    }
    cout << count + ((parity & !zero) ? 2 : 0) << '\n';
    return 0;
}
