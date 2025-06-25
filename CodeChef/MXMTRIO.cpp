#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long int

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
        sort(arr, arr + n);
        reverse(arr, arr + n);
        ll sub = (arr[0] - arr[n - 1]);
        ll ans = sub * arr[1];
        cout << ans << '\n';
    }
}