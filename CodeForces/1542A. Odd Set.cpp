#include <iostream>
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
        int count = 0;
        for (int i = 0; i < 2 * n; i++) {
            int flag;
            cin >> flag;
            count = count + (flag % 2);
        }
        count == n ? cout << "Yes\n" : cout << "No\n";
    }
}