#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int x, p, q;
        cin >> x >> p >> q;
        int ans = (p - q) * x;
        cout << ans << '\n';
    }
}