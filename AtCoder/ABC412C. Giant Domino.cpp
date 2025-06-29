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
        int ans = 1, last = 0;
        bool failed = false;
        vector<bool> flag(n, false);
        while (true) {
            if (arr[last] * 2 >= arr[n - 1]) {
                ans++;
                break;
            }
            int next = -1;
            for (int i = 1; i <= n - 1; i++) {
                if (flag[i])
                    continue;
                if (arr[last] * 2 >= arr[i]) {
                    if (next != -1 && arr[next] >= arr[i])
                        continue;
                    next = i;
                }
            }
            if (next == -1 || arr[next] <= arr[last]) {
                cout << "-1\n";
                failed = true;
                break;
            }
            ans++;
            last = next;
            flag[next] = true;
        }
        if (!failed)
            cout << ans << '\n';
    }
}
