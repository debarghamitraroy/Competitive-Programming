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
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                cout << '*';
            }
            for (int k = 0; k < 2 * (n - i); k++) {

                cout << '#';
            }
            for (int j = 0; j < i; j++) {
                cout << '*';
            }
            cout << '\n';
        }
        cout << '\n';
    }
}