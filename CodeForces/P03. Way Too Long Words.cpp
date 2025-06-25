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
        string w;
        cin >> w;
        int n = w.length();
        n <= 10 ? cout << w << '\n' : cout << w[0] << n - 2 << w[n - 1] << '\n';
    }
}