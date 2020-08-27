#include <iostream>
using namespace std;

long long solve() {
    int n; cin >> n;
    int max_val{0}, val;
    long long res;
    for (int i = 0; i <n; ++i) {
        cin >> val;
        if (i == 0) {
            max_val = val;
            continue;
        }
        if (val < max_val) {
            res += max_val - val;
        }
        max_val = max(max_val, val);
    }
    
    return res;
}

int main() {
	cout << solve() << endl;
	return 0;
}
