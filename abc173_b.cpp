#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

string solve() {
    int n; cin >> n;
    unordered_map<string, int> freq;
    freq["AC"] = 0; freq["WA"] = 0; freq["TLE"] = 0; freq["RE"] = 0;
    while (n--) {
        string s; cin >> s;
        freq[s]++;
    }
    string res = "AC x " + to_string(freq["AC"]) + "\n";
    res += "WA x " + to_string(freq["WA"]) + "\n";
    res += "TLE x " + to_string(freq["TLE"]) + "\n";
    res += "RE x " + to_string(freq["RE"]) + "\n";
    
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cout << solve();
}
