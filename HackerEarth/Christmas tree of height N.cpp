#include <iostream>
using namespace std;

#define ll long long int

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
        for (int i = 1; i <= n; i++) {
            ll c = 1;
            for (int j = 1; j <= i; j++) {
                cout << c << ' ';
                c = c * (i - j) / j;
            }
            cout << '\n';
        }
    }
}
