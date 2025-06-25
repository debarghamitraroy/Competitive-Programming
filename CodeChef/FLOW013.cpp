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
        int a, b, c;
        cin >> a >> b >> c;
        (a + b + c > 180 || a + b + c < 180) ? cout << "NO\n" : cout << "YES\n";
    }
}