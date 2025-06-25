#include <iostream>
#include <vector>
#include <climits>
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
        int ans = INT_MIN;
        for (int i = 0; i < n; i++) {
            ans = max(ans, arr[i] - arr[(i + 1) % n]);
        }
        for (int i = 1; i < n; i++) {
            ans = max(ans, arr[i] - arr[0]);
        }
        for (int i = 0; i < n - 1; i++) {
            ans = max(ans, arr[n - 1] - arr[i]);
        }
        cout << ans << '\n';
    }
}