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
        int n, m, k;
        cin >> n >> m >> k;
        int diff = abs(n - m);
        diff >= k ? cout << "YES\n" : cout << "NO\n";
    }
}