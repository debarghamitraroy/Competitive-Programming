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
        if (x > n && y > n)
            cout << "NOTHING\n";
        else if (y <= n && x > n)
            cout << "BURGER\n";
        else
            cout << "PIZZA\n";
    }
}