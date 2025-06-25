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
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        unordered_map<int, int> mpp;
        for (auto it : arr) {
            mpp[it]++;
        }
        int ans = 0;
        for (auto it : mpp) {
            if (it.second > 1) {
                ans = it.first;
                break;
            }
        }
        ans ? cout << "1\n" << ans << '\n' : cout << "-1\n";
    }
}