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
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '5' || s[i] == '0') {
                count = -1;
                break;
            }
        }
        count == -1 ? cout << "YES\n" : cout << "NO\n";
    }
}