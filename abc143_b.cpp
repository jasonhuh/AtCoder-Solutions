#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> nums(n);
    for (auto& d : nums) {
        cin >> d;
    }
    auto res = 0ll;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            res += nums[i] * nums[j];
        }
    }

    cout << res << endl;
}