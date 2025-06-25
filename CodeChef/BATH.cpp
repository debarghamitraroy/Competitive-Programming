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
        int x, y;
        cin >> x >> y;
        int bath = (2 * y);
        int ans = (x / bath);
        cout << ans << '\n';
    }
}