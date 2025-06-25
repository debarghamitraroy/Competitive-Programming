#include <iostream>
#include <cmath>
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
        double s, a, b, c;
        cin >> s >> a >> b >> c;
        int temp = abs(c);
        if (c < 0) {
            double x = s - ((temp * s) / 100);
            if (x >= a && x <= b)
                cout << "YES\n";
            else if (x < a || x > b)
                cout << "NO\n";
        } else if (c > 0) {
            double y = s + ((temp * s) / 100);
            if (y >= a && y <= b)
                cout << "YES\n";
            else if (y < a || y > b)
                cout << "NO\n";
        } else {
            if (s >= a && s <= b)
                cout << "YES\n";
            else if (s < a || s > b)
                cout << "NO\n";
        }
    }
}