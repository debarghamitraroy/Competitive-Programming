#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n, l;
    cin >> n >> l;
    vector<string> str(n);
    for (auto& it : str) {
        cin >> it;
    }
    string ans = "";
    sort(str.begin(), str.end());
    for (auto it : str) {
        ans += it;
    }
    cout << ans;
}