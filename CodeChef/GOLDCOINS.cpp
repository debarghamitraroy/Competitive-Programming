#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    x > y ? cout << a : cout << b;
}