#include <iostream>
#include <iomanip>
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
        int x, y;
        cin >> x >> y;
        double sum = x * y;
        if (x >= 1000)
            sum = sum - (sum / 10);
        cout << fixed << setprecision(6) << sum << '\n';
    }
}