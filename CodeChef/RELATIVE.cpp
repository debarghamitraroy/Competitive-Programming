#include <iostream>
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
        ll g, c;
        cin >> g >> c;
        ll v = ceil(pow(c, 2));
        ll h = v / (2 * g);
        cout << h << '\n';
    }
}