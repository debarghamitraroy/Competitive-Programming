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
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        if (a + c >= n && b >= n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}