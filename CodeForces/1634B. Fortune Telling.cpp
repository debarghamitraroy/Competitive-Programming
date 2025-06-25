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
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> v(n);
        int count = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            count = count + v[i];
        }
        int total = count + x + y;
        total % 2 == 0 ? cout << "Alice\n" : cout << "Bob\n";
    }
}