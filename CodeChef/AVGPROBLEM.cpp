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
        double a, b, c;
        cin >> a >> b >> c;
        double avg = (a + b) / 2;
        if (avg > c)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}