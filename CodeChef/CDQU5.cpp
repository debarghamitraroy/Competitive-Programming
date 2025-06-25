#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

const int mod = 1000000009;
int dp[1000007];

void solve();

int main() {
    solve();
    return 0;
}

int ways(int n) {
    if (n == 1)
        return dp[n] = 0;
    if (n == 2 or n == 3)
        return dp[n] = 1;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = (ways(n - 2) % mod + ways(n - 3) % mod) % mod;
}

void solve() {
    int t;
    cin >> t;
    memset(dp, -1, sizeof(dp));
    ways(1000006);
    while (t--) {
        int n;
        cin >> n;
        cout << dp[n] << '\n';
    }
}