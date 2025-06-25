#include <iostream>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    ll n;
    cin >> n;
    ll ans = 0;
    n % 2 == 0 ? ans = n / 2 : ans = -(n + 1) / 2;
    cout << ans;
}