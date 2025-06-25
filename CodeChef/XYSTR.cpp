#include <iostream>
#include <vector>
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
        string s;
        cin >> s;
        int len = s.length();
        vector<int> dp(len, 0);
        vector<int> vis(len, 0);
        for (int i = 1; i < len; i++) {
            if (!vis[i - 1] and s[i - 1] != s[i]) {
                vis[i] = vis[i - 1] = 1;
                dp[i] = dp[i - 1] + 1;
            } else
                dp[i] = dp[i - 1];
        }
        cout << dp[len - 1] << '\n';
    }
}