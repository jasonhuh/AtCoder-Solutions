#include <iostream>
using namespace std;

bool solve(int arr[][2], int n) {
    int cnt = 0, max_cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i][0] == arr[i][1]) {
            cnt++;
        } else {
            cnt = 0;
        }
        max_cnt = max(max_cnt, cnt);
    }

    return max_cnt >= 3;
}

int main() {
    int n; cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i][0] >> arr[i][1];
    }
    if (solve(arr, n)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}