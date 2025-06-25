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
        if (x >= y)
            cout << y << '\n';
        else {
            while (x <= y)
                y = (y - x) - 1;
            if (y < 0)
                y = x;
            cout << y << '\n';
        }
    }
}