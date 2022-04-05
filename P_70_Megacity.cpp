#include <bits/stdc++.h>

using namespace std;

struct City {
    int x, y, population;
    double sdistance() const { return x * x + y * y; }
};
int main() {
    int n, s;
    cin >> n >> s;
    vector<City> v(n);
    for (int i = 0; i < n; i++) {
        City& city = v[i];
        cin >> city.x >> city.y >> city.population;
    }
    sort(v.begin(), v.end(),
         [](City a, City b) { return a.sdistance() < b.sdistance(); });
    for (int i = 0; i < n; i++) {
        s += v[i].population;
        if (s >= 1e6) {
            printf("%lf\n", sqrt(v[i].sdistance()));
            goto end;
        }
    }
    cout << -1 << '\n';
end:;
    return 0;
}
