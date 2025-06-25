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
        int n, a;
        cin >> n >> a;
        int rem = n - a;
        int ans = min(a, rem);
        cout << ans << '\n';
    }
}