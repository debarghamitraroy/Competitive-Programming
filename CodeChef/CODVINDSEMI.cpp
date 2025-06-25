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
        int x, y, z;
        cin >> x >> y >> z;
        int ans = x + (z * 2);
        ans >= y ? cout << "YES\n" : cout << "NO\n";
    }
}