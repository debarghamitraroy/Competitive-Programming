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
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 0, x; i < n; i++) {
            cin >> x;
            ans = ans | x;
        }
        cout << ans << '\n';
    }
}