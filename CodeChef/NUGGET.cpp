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
    int amount = (x * 5000) + (y * 9800);
    cout << amount;
}