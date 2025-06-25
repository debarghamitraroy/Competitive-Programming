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
        int n, count = 0;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            if (i == 0 || i == 1)
                continue;
            count = 1;
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    count = 0;
                    break;
                }
            }
            if (count == 1)
                cout << i << ' ';
        }
        cout << '\n';
    }
}