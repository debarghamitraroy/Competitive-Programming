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
        ll n1, n2, m;
        cin >> n1 >> n2 >> m;
        m = (m * (m + 1)) / 2;
        ll count = 0;
        m <= min(n1, n2) ? count = (n1 + n2) - (2 * m) : count = (n1 + n2) - (2 * min(n1, n2));
        cout << count << '\n';
    }
}