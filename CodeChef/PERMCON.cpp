#include <iostream>
#include <vector>
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
        int n, k;
        cin >> n >> k;
        vector<int> ans(n + 1);
        bool isPossible = true;
        for (int i = 1; i <= n; i++) {
            int x = i + k;
            if (x > n)
                x = 1 + (x - 1) % k;
            ans[i] = x;
            if (i == x) {
                isPossible = false;
                break;
            }
        }
        if (!isPossible)
            cout << "-1\n";
        else {
            for (int i = 1; i <= n; i++) {
                cout << ans[i] << ' ';
            }
            cout << '\n';
        }
    }
}