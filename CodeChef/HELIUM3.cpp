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
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        int required = (a * b);
        int taken = (x * y);
        required <= taken ? cout << "YES\n" : cout << "NO\n";
    }
}