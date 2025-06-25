#include <iostream>
using namespace std;

#define ll long long int
#define MOD (int)(1e9 + 7)

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    ll n;
    cin >> n;
    ll ans = 1, base = 2;
    while (n > 0) {
        if (n & 1LL)
            ans = (ans * base) % MOD;
        n = n >> 1LL;
        base = (base * base) % MOD;
    }
    cout << ans;
}