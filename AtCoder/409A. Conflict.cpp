#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n;
    cin >> n;
    string t, a;
    cin >> t >> a;
    for (int i = 0; i < n; i++) {
        if (t[i] == 'o' && a[i] == 'o') {
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
}