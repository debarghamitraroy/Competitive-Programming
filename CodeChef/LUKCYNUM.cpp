#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void lucky_number(int x, int y, int z) {
    (x == 7 || y == 7 || z == 7) ? cout << "YES\n" : cout << "NO\n";
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        lucky_number(a, b, c);
    }
}