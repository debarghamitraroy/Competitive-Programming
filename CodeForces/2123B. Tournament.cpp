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
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> arr(n);
        for (auto &it : arr) {
            cin >> it;
        }
        int max_value = *max_element(arr.begin(), arr.end());
        if (k > 1 || arr[j - 1] == max_value)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
