#include <bits/stdc++.h>

using namespace std;

void toggle(int& v) {
    v = !v;
}

int main() {
    int arr[3][3] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int times;
            cin >> times;
            if (times & 1) {  // odd times
                toggle(arr[i][j]);
                if (0 <= j - 1)
                    toggle(arr[i][j - 1]);
                if (j + 1 < 3)
                    toggle(arr[i][j + 1]);
                if (0 <= i - 1)
                    toggle(arr[i - 1][j]);
                if (i + 1 < 3)
                    toggle(arr[i + 1][j]);
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j];
        }
        cout << '\n';
    }
    return 0;
}
