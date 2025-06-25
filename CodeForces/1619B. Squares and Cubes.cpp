#include <iostream>
#include <set>
#include <cmath>
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
        ll n;
        cin >> n;
        set<int> s;
        for (int i = 1; i <= sqrt(n); i++) {
            ll square = i * i;
            s.insert(square);
        }
        for (int i = 1; i * i * i <= n; i++) {
            ll cube = i * i * i;
            s.insert(cube);
        }
        cout << s.size() << '\n';
    }
}