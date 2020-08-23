#include <bits/stdc++.h>

using namespace std;

#define reps(i,s,n) for(int (i) = (s); (i) < (n); (i)++)
#define rep(i,n) reps(i,0,n)

typedef long long ll;
typedef vector<int> vi;

ll mod = 1e9+7;

ll solve() {
    string s; cin >> s;
    int cnt = 0, n = static_cast<int>(s.size());
    int res = 0;
    rep(i, n) {
        if (s[i] == 'R') {
            cnt++;
        } else {
            cnt = 0;
        }
        res = max(res, cnt);
    }

    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	cout << solve() << endl;
}
