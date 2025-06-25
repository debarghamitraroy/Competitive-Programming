#include <iostream>
#include <vector>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n;
    cin >> n;
    int idx;
    vector<int> ans(n);
    for (int i = 1; i <= n; i++) {
        cin >> idx;
        ans[idx] = i;
    }
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << ' ';
    }
}