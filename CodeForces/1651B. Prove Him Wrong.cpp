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
        int n;
        cin >> n;
        int p = 1;
        if (n > 19)
            cout << "NO\n";
        else {
            cout << "YES\n";
            for (int i = 0; i < n; i++) {
                cout << p << ' ';
                p = p * 3;
            }
            cout << '\n';
        }
    }
}