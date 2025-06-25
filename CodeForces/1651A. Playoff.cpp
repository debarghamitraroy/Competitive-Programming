#include <iostream>
#include <cmath>
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
    ll ans = pow(2, n) - 1;
    cout << ans;
}