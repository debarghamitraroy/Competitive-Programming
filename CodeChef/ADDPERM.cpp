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
        int x = n + 1 - k;
        vector<int> ans;
        for (int i = x; i >= 1; i--) {
            ans.push_back(i);
        }
        for (int i = x + 1; i <= n; i++) {
            ans.push_back(i);
        }
        for (int i = 0; i < n; i++) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
}
