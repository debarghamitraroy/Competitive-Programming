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
        int n, x, y;
        cin >> n >> x >> y;
        int need_x = (n + 1) / 2 - x;
        int need_y = (n + 1) / 2 - y;
        int diff = abs(need_x - need_y);
        diff % 2 == 0 ? cout << 0 << '\n' : cout << 1 << '\n';
    }
}