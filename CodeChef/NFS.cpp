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
        int u, v, a, s;
        cin >> u >> v >> a >> s;
        int need_speed = (u * u) - (2 * a * s);
        if (need_speed <= v * v)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}