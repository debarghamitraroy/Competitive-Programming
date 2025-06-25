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
    double n, m, a;
    cin >> n >> m >> a;
    double x = ceil(n / a);
    double y = ceil(m / a);
    ll ans = x * y;
    cout << ans;
}