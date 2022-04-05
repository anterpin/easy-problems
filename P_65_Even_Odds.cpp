#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main() {
    ull n, k;
    cin >> n >> k;
    ull lodd = (n % 2 == 1) ? n : n - 1;
    ull loddpos = (lodd - 1) / 2;

    if (loddpos >= k - 1) {  // odd number
        cout << (k - 1) * 2 + 1 << endl;
    } else {
        cout << 2 + ((k - 1) - (loddpos + 1)) * 2 << endl;
    }
    return 0;
}
