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
    int ans = max((a + b + c), max(((a + b) * c), max((a * (b + c)), (a * b * c))));
    cout << ans;
}

