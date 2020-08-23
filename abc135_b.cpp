#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

string solve() {
    int n; cin >> n;
    bool used = false;
    int prev = -1;
    int a;
    vi nums;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        nums.push_back(a);
    }

    return "YES";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	cout << solve() << endl;
}
