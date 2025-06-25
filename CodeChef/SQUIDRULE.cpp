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
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int min = arr[0];
        for (int i = 0; i < n; i++) {
            if (arr[i] <= min)
                min = arr[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + arr[i];
        }
        int ans = sum - min;
        cout << ans << '\n';
    }
}