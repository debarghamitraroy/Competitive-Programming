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
        int count = 0;
        if (y == 0)
            count = x;
        else if (x == y)
            count = x + y - 1;
        else
            count = x + y;
        cout << count << '\n';
    }
}