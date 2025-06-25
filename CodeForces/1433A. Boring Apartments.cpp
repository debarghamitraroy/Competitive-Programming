#include <iostream>
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
        string str;
        cin >> str;
        int digit = str[0] - '0' - 1;
        int n = str.size();
        int ans = (digit * 10) + (n * (n + 1)) / 2;
        cout << ans << '\n';
    }
}