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
            cout << i;
            for (int j = n; j > 0; j--) {
                if (i != j)
                    cout << ' ' << j;
            }
            cout << '\n';
        }
    }
}