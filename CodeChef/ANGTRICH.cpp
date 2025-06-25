#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    (a > 0 && b > 0 & c > 0) ? a + b + c == 180 ? cout << "YES" : cout << "NO" : cout << "NO";
}