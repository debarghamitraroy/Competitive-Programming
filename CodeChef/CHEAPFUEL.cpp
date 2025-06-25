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
        int x, y, a, b, k;
        cin >> x >> y >> a >> b >> k;
        int m = x + (k * a);
        int n = y + (k * b);
        if (m == n)
            cout << "SAME PRICE\n";
        if (m < n)
            cout << "PETROL\n";
        if (m > n)
            cout << "DIESEL\n";
    }
}