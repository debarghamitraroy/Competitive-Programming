#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

bool coupon(int d, int c, int a1, int a2, int a3, int b1, int b2, int b3) {
    int a = a1 + a2 + a3;
    int b = b1 + b2 + b3;
    int coup = c;
    int delv = d + d;
    if (a < 150)
        coup = coup + d;
    if (b < 150)
        coup = coup + d;
    if (coup < delv)
        return true;
    else
        return false;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int d, c, a1, a2, a3, b1, b2, b3;
        cin >> d >> c >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
        coupon(d, c, a1, a2, a3, b1, b2, b3) ? cout << "YES\n" : cout << "NO\n";
    }
}