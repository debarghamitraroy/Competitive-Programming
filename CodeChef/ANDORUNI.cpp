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
        int t;
        cin >> t;
        int ans = 0;
        for (int i = 1; i < n; i++) {
            int x;
            cin >> x;
            ans = ans | (t & x);
            t = t | x;
        }
        cout << ans << '\n';
    }
}