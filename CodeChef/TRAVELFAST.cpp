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
        if (x < y)
            cout << "BIKE";
        else if (x > y)
            cout << "CAR";
        else
            cout << "SAME";
    }
}