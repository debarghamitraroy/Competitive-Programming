#include <iostream>
#include <vector>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    ll mid = 0;
    n % 2 == 0 ? mid = n / 2 : mid = (n / 2) + 1;
    ll ans = 0;
    k <= mid ? ans = (k * 2) - 1 : ans = ((k - mid) * 2);
    cout << ans;
}