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
        int n, x;
        cin >> n >> x;
        vector<int> s(n), r(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i] >> r[i];
        }
        if (n == 1)
            x >= s[0] ? cout << r[0] << '\n' : cout << "0\n";
        else {
            int maximum = 0;
            for (int i = 0; i < n; i++) {
                if (x >= s[i])
                    maximum = max(maximum, r[i]);
            }
            cout << maximum << '\n';
        }
    }
}