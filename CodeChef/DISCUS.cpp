#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int max_element = max(a, b);
        int ans = max(max_element, c);
        cout << ans << '\n';
    }
}