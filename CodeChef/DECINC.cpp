#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n;
    cin >> n;
    int ans = 0;
    n % 4 == 0 ? ans = n + 1 : ans = n - 1;
    cout << ans;
}