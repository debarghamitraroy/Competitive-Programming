#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total_drinks = k * l;
    int total_limes = c * d;
    int per_drink = total_drinks / nl;
    int per_salt = p / np;
    int ans = min(min(per_drink, per_salt), total_limes) / n;
    cout << ans;
}