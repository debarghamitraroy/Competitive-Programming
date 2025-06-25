#include <iostream>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

ll priceOfBananas(ll k, ll n, ll w) {
    ll count = 0;
    for (int i = 1; i <= w; i++) {
        count += i;
    }
    ll price = count * k;
    return price;
}

void solve() {
    ll k, n, w;
    cin >> k >> n >> w;
    ll price = priceOfBananas(k, n, w);
    ll ans = (price - n);
    ans > 0 ? cout << ans : cout << "0";
}