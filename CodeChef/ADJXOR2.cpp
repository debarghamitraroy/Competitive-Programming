#include <iostream>
using namespace std;

#define ll long long int

const int N = 1e5 + 5;

ll dp[N][2];

void solve();

int main() {
    solve();
    return 0;
}

ll xorValue(ll x, ll y) {
    return (x ^ y);
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;
        ll arr[N];
        for (ll i = 1; i <= n; i++) {
            cin >> arr[i];
        }
        for (ll i = 2; i <= n; i++) {
            dp[i][0] = max(xorValue(arr[i], arr[i - 1]) + dp[i - 1][0], xorValue(arr[i], arr[i - 1] + x) + dp[i - 1][1]);
            dp[i][1] = max(xorValue(arr[i] + x, arr[i - 1]) + dp[i - 1][0], xorValue(arr[i] + x, arr[i - 1] + x) + dp[i - 1][1]);
        }
        cout << max(dp[n][0], dp[n][1]) << '\n';
    }
}