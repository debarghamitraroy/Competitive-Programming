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
        for (auto &it : arr) {
            cin >> it;
        }
        vector<int>flag(n, 0);
        int prefix_min = arr[0], suffix_max = arr[n - 1];
        for (int i = 0; i < n; i++) {
            if (arr[i] <= prefix_min) {
                flag[i] = 1;
                prefix_min = arr[i];
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] >= suffix_max) {
                flag[i] = 1;
                suffix_max = arr[i];
            }
        }
        for (auto it : flag) {
            cout << it;
        }
        cout << '\n';
    }
}
