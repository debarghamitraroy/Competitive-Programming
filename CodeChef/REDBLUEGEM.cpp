#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int r, b, p, q;
    cin >> r >> b >> p >> q;
    cout << max(r * p, b * q);
}
