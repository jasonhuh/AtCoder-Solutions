#include <bits/stdc++.h>

using namespace std;

#define reps(i,s,n) for(int (i) = (s); (i) < (n); (i)++)
#define rep(i,n) reps(i,0,n)

typedef long long ll;
typedef vector<int> vi;

ll mod = 1e9+7;


ll solve() {
    bitset<10> a(string("0010110110")); 
    bitset<10> b(string("1011011000")); 
    cout << a << "," << a[1] << "\n";
    cout << b << "\n";
    cout << (a&b) << "\n"; // 0010010000 
    cout << (a|b) << "\n"; // 1011111110 
    cout << (a^b) << "\n"; // 1001101110

    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	cout << solve() << endl;
}
