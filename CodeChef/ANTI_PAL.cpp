#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        array<int, 26> count{};
        for (char c : s) {
            count[c - 'a']++;
        }
        if (n % 2 == 1 || *max_element(count.begin(), count.end()) > n / 2)
            cout << "NO\n";
        else {
            cout << "YES\n";
            sort(s.begin(), s.end());
            reverse(s.begin() + n / 2, s.end());
            cout << s << '\n';
        }
    }
}