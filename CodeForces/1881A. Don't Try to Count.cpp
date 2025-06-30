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
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int count = 0, idx = 0;
        while (idx < 6 && x.find(s) == string::npos) {
            x += x;
            idx++;
        }
        if (idx < 6)
            cout << idx << '\n';
        else
            cout << "-1\n";
    }
}

