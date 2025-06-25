#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x = a - c;
    int y = b - d;
    cout << x << ' ' << y;
}
