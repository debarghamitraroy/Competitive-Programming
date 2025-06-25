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
        int seats = ((n + 1) / 2) * ((m + 1) / 2);
        cout << seats << '\n';
    }
}