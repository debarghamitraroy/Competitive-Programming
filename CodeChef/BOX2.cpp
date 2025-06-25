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
        int x, y, k;
        cin >> x >> y >> k;
        (abs(k - abs(x - y)) % 2 == 0) ? cout << abs(k - abs(x - y)) / 2 << '\n' : cout << "-1\n";
    }
}