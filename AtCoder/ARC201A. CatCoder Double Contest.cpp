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
        ll n, h, m, e, s1 = 0, s2 = 0, s3 = 0;
        cin >> n;
        for (ll i = 0; i < n; i++) {
            cin >> h >> m >> e;
            ll c1 = min(h, m);
            ll c2 = min(m, e);
            s1 += c1;
            s2 += c2;
            s3 += min(m, c1 + c2);
        }
        ll total_set = min(s1, min(s2, s3 / 2));
        cout << total_set << '\n';
    }
}
