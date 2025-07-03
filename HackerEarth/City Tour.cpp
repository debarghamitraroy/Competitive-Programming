#include <iostream>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll ans = n * 4;
        cout << ans << '\n';
    }
}
