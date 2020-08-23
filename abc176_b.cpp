#include <iostream>
#include <string>

using namespace std;

int main() {
    string s; cin >> s;
    int total{0};

    for (char c : s) {
        total += c - '0';
        total %= 9;
    }

    cout << (total % 9 == 0 ? "Yes" : "No") << "\n";
}