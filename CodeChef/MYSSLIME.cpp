#include <iostream>
#include <vector>
#include <algorithm>
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int left = 0, right = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            i != 1 ? left = 0 : left = arr[0];
            i != n - 2 ? right = 0 : right = arr[n - 1];
            ans = max(ans, arr[i] - left - right);
        }
        cout << ans << '\n';
    }
}