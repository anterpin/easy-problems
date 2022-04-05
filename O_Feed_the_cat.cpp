#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll myceil(ll n, ll d) {
    if (n % d != 0) {
        return n / d + 1;
    }
    return n / d;
}

int main() {
    int H, M;
    cin >> H >> M;
    ll h, d, c, n;
    cin >> h >> d >> c >> n;
    int left = (23 - H) * 60 + (60 - M);
    auto discount = [](ll q, int left) {
        if (left <= 240)
            return q * 0.8;
        return static_cast<double>(q);
    };
    double m = discount(c * myceil(h, n), left);
    for (int i = 1; i < left; i++) {
        m = min(discount(c * myceil(h + i * d, n), left - i), m);
    }
    printf("%lf\n", m);
    return 0;
}
