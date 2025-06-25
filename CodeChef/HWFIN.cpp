#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int x, y;
    cin >> x >> y;
    int total = x + (y * 10);
    total >= 100 ? cout << "YES" : cout << "NO";
}