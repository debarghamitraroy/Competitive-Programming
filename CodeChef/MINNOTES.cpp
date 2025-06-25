#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }
        if (n == 1) {
            cout << "1\n";
            return;
        }
        vector<ll> pre(n), suff(n);
        pre[0] = v[0];
        suff[n - 1] = v[n - 1];
        for (int i = 1; i < n; i++) {
            pre[i] = __gcd(pre[i - 1], v[i]);
            suff[n - 1 - i] = __gcd(suff[n - i], v[n - i - 1]);
        }
        ll ans = sum;
        for (int i = 0; i < n; i++) {
            ll prev = (i == 0) ? 0 : pre[i - 1];
            ll after = (i == n - 1) ? 0 : suff[i + 1];
            ll gcd = __gcd(prev, after);
            if (gcd != 0)
                ans = min(ans, (sum - v[i]) / gcd + 1);
        }
        cout << ans << '\n';
    }
}