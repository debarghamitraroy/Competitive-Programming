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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] >= arr[n - 1]) {
                ans = n - i - 1;
                break;
            }
        }
        cout << ans << '\n';
    }
}