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
        int m, x, y, z;
        cin >> m >> x >> y >> z;
        if (m <= x && m < y && m < z)
            cout << "CSE";
        else if (m > x && m <= y && m < z)
            cout << "ECE";
        else if (m > x && m > y && m <= z)
            cout << "Other Branch";
        else
            cout << "Better luck next time";
    }
}