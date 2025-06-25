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
        double n;
        cin >> n;
        double x = (0.143 * n);
        double possibility = pow(x, (int)n);
        double ans = floor(possibility + 0.5);
        cout << ans << '\n';
    }
}