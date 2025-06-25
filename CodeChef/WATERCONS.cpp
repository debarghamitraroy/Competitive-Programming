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
        int x;
        cin >> x;
        x >= 2000 ? cout << "YES\n" : cout << "NO\n";
    }
}