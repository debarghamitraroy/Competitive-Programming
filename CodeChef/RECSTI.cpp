#include <iostream>
#include <vector>
#include <unordered_map>
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
        vector<int> v(n), a, b;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            mpp[v[i]]++;
        }
        int total = n;
        for (int i = 1; i <= 100; i++) {
            total = total + (mpp[i] % 2);
        }
        total = total + (total % 4);
        int ans = total - n;
        cout << ans << '\n';
    }
}