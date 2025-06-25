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
        n % 2 == 1 ? cout << n / 2 + 1 << '\n' : cout << n / 2 << '\n';
    }
}