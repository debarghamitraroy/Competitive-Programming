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
        int x, y, d;
        cin >> x >> y >> d;
        abs(x - y) <= d ? cout << "YES\n" : cout << "NO\n";
    }
}