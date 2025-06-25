#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int a, x, y;
    cin >> a >> x >> y;
    a <= x + y ? cout << "YES" : cout << "NO";
}