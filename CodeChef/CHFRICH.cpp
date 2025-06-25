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
        int a, b, t;
        cin >> a >> b >> t;
        int ans = (b - a) / t;
        cout << ans << '\n';
    }
}