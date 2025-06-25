#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n, x;
    cin >> n >> x;
    int ans = (n - x);
    cout << ans;
}