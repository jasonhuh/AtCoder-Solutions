#include <iostream>

using namespace std;

int main() {
    int n, k, m, a; cin >> n >> k >> m;
    int total = 0;
    for (int i = 0; i < n - 1; ++i) {
        cin >> a;
        total += a;
    }
    int x = max(0, m * n - total);
    int res = (x > k) ? -1 : x;

    cout << res << "\n";
}