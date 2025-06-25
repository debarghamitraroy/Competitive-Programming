#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

int operation(vector<int>& v, int n) {
    int zeros = count(v.begin(), v.end(), 0);
    int maxx = n - zeros;
    int ans = max(maxx, zeros);
    return ans;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        cout << operation(v, n) << '\n';
    }
}