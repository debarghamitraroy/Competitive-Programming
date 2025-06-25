#include <iostream>
#include <algorithm>
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
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<int> temp = v;
        sort(temp.begin(), temp.end());
        int count = 0;
        for (int i = 0; i < n; ++i) {
            if (temp[i] == v[i])
                count++;
            else
                break;
        }
        count == n ? cout << "NO\n" : cout << "YES\n";
    }
}