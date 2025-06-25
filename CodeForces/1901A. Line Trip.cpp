#include <iostream>
#include <algorithm>
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
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int diff = arr[0];
        for (int i = 0; i < n - 1; i++) {
            diff = max(diff, arr[i + 1] - arr[i]);
        }
        diff = max(diff, 2 * (x - arr[n - 1]));
        cout << diff << '\n';
    }
}