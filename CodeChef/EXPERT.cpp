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
        float x, y;
        cin >> x >> y;
        if (y / x >= 0.5)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
