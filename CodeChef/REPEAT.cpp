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
        int n, k, s;
        cin >> n >> k >> s;
        int ans = (s - (n * n)) / (k - 1);
        cout << ans << '\n';
    }
}