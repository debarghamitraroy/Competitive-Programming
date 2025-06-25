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
        int a, b;
        cin >> a >> b;
        int min = max(a, b);
        int max = a + b;
        cout << min << ' ' << max << '\n';
    }
}