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
        int avg;
        cin >> avg;
        int n = 3 * avg;
        int a = 0, b = 0, c = 0;
        a = (n / 3) + 1;
        b = n / 3;
        c = (n / 3) - 1;
        cout << a << ' ' << b << ' ' << c << '\n';
    }
}