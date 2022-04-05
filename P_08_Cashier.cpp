#include <bits/stdc++.h>
#define ln '\n'
#define MP make_pair

using namespace std;

int main() {
  int n, N, a;
  cin >> n >> N >> a;
  int breaks = 0;
  int current_time = 0;
  for (int i = 0; i < n; i++) {
    int t, l;
    cin >> t >> l;

    breaks += (t - current_time) / a;
    current_time = t + l;
  }
  breaks += (N - current_time) / a;
  cout << breaks << ln;
  return 0;
}