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
        int n, m;
        cin >> n >> m;
        n > m ? cout << abs(n - m) + n << '\n' : cout << n << '\n';
    }
}