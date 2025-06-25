#include <iostream>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

bool isPossible(ll mid, ll n) {
    ll coins = (mid * (mid + 1)) / 2;
    if (coins <= n)
        return true;
    else
        return false;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll low = 1;
        ll high = n;
        ll ans = 0;
        while (low <= high) {
            ll mid = (low + high) / 2;
            if (isPossible(mid, n)) {
                ans = mid;
                low = mid + 1;
            } else
                high = mid - 1;
        }
        cout << ans << '\n';
    }
}