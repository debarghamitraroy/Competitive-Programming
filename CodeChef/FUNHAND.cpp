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
        int n, a, b;
        cin >> n >> a >> b;
        if (abs(a - b) > 2 || abs(a - b) <= 0)
            cout << 0 << '\n';
        else if (min(a, b) == 1 || max(a, b) == n || abs(a - b) == 2)
            cout << 1 << '\n';
        else
            cout << 2 << '\n';
    }
}