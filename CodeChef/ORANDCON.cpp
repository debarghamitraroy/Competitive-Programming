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
        int n;
        cin >> n;
        int a = n;
        int b = n + (1 << 27);
        int c = 0;
        cout << a << ' ' << b << ' ' << c << '\n';
    }
}