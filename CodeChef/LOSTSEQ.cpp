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
        int a[2 * n];
        int sum = 0;
        for (int i = 0; i < (2 * n); i++) {
            cin >> a[i];
            sum += a[i];
        }
        sum % 2 ? cout << "NO\n" : cout << "YES\n";
    }
}