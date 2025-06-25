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
        int x, y;
        cin >> x >> y;
        int banana = (x / 2);
        int apple = y;
        banana <= apple ? cout << banana << '\n' : cout << apple << '\n';
    }
}