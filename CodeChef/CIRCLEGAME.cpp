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
        int m, x;
        cin >> m >> x;
        int ans[x + 1];
        ans[1] = 1;
        if (x > 1) {
            for (int i = 2; i <= x; i++) {
                int temp;
                m % i != 0 ? temp = m % i : temp = x;
                temp > ans[i - 1] ? ans[i] = ans[i - 1] : ans[i] = ans[i - 1] + 1;
            }
        }
        for (int i = 1; i <= x; i++)
            cout << ans[i] << ' ';
        cout << '\n';
    }
}