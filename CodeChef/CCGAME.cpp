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
        ll ans = 0;
        for (int i = 1; i <= n; i++) {
            ll x;
            cin >> x;
            if (x & 1)
                ans = ans ^ (n - i);
        }
        ans == 0 ? cout << "Cook\n" : cout << "Chef\n";
    }
}