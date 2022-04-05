#include <bits/stdc++.h>
using namespace std;

int main() {
    size_t x;
    cin >> x;
    unordered_set<size_t> s;
    size_t a, b = 1;
    a = 0;
    s.insert(a);
    while (a <= x) {
        s.insert(a);
        if (s.count(x - a) == 1) {
            cout << "yes\n";
            return 0;
        }
        swap(a, b);
        b = a + b;
    }
    cout << "no\n";
    return 0;
}
