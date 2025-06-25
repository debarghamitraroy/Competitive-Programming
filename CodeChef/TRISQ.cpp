#include <iostream>
#include <cmath>
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
        int b;
        cin >> b;
        b = b / 2;
        int ans = (b * (b - 1)) / 2;
        cout << ans << '\n';
    }
}