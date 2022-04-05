#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int row, seat;
    vector<int> seats(n);
    row = -1;
    for (int i = 0; i < n; i++) {
        char arr[4] = {0};
        char separator;
        cin >> arr[0] >> arr[1] >> separator >> arr[2] >> arr[3];

        if (arr[0] == 'O' && arr[1] == 'O' && row == -1) {
            row = i;
            seat = 0;
        }
        if (arr[2] == 'O' && arr[3] == 'O' && row == -1) {
            row = i;
            seat = 2;
        }
        memcpy(&seats[i], arr, 4);
    }
    if (row == -1) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        char* i = (char*)&seats[row];
        i[seat] = '+';
        i[seat + 1] = '+';
        for (int i = 0; i < n; i++) {
            char arr[4];
            memcpy(arr, &seats[i], 4);
            cout << arr[0] << arr[1] << '|' << arr[2] << arr[3] << '\n';
        }
    }
    return 0;
}
