#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        int k;
        cin >> k;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int t, d;
            cin >> t >> d;
            if (t <= k)
                k = k - t;
            else {
                sum = sum + ((t - k) * d);
                k = 0;
            }
        }
        cout << sum << '\n';
    }
}