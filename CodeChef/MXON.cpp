#include <iostream>
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
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        reverse(str.begin(), str.end());
        for (int i = 0; i < n - 1 && k > 0; i++) {
            if (str[i] == '1' && str[i + 1] == '0') {
                str[i + 1] = '1';
                k--;
            }
        }
        int ans = count(str.begin(), str.end(), '1');
        cout << ans << '\n';
    }
}