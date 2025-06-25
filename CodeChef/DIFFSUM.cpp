#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int a, b;
    cin >> a >> b;
    int ans = 0;
    a > b ? ans = a - b : ans = a + b;
    cout << ans;
}