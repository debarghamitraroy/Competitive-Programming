#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int l, r;
    cin >> l >> r;
    cout << abs(l - r);
}
