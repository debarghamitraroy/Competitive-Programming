#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

string romantic_reversals(string s, int n, int k) {
    if (k == 1)
        return s;
    string ans = s;
    int l = 0, h = k - 1, idx = k - 1;
    while (l <= h) {
        if (l == h)
            ans[idx--] = s[l];
        else {
            ans[idx--] = s[l];
            ans[idx--] = s[h];
        }
        l++;
        h--;
    }
    return ans;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        cout << romantic_reversals(s, n, k) << '\n';
    }
}