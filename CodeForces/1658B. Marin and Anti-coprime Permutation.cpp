#include <iostream>
using namespace std;

#define ll long long int
#define mod (int)(998244353)

void solve();

int main() {
    solve();
    return 0;
}

ll factorial(ll n) {
    if (n == 0)
        return 1;
    return ((n % mod) * (factorial(n - 1) % mod) % mod);
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (n % 2 == 0) {
            ll even = n / 2;
            ll count = factorial(even % mod) % mod;
            ll ans = (count * count) % mod;
            cout << ans << '\n';
        } else
            cout << "0\n";
    }
}