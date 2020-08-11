#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int divisors(int k) {
    int cnt = 0;
    for (int x = 2; x * x <= k; ++x) {
        if (k % x == 0) {
            if (x * x == k) {
                cnt++;
            } else {
                cnt += 2;
            }
        }
    }
    
    return cnt;
}

ll solve() {
    int n; cin >> n;

    unordered_map<int, int> memo;
    int res = 0;
    for (int k = 0; k <= n; ++k) {
        res += k * divisors(k);
    }

    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cout << divisors(4) << endl;
    cout << divisors(6) << endl;
    cout << divisors(24) << endl;
	// cout << solve() << endl;
}
