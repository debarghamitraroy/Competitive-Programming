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
        char a, b, c;
        cin >> a >> b >> c;
        char x, y;
        cin >> x >> y;
        if (a == x)
            cout << x << '\n';
        else if (a != x && a == y)
            cout << y << '\n';
        else if (a != x && a != y && b == x)
            cout << x << '\n';
        else
            cout << y << '\n';
    }
}