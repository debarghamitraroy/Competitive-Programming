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
        int a, b;
        cin >> a >> b;
        a % b == 0 ? cout << "0\n" : a > b    ? cout << b - (a % b) << '\n' : cout << b - a << '\n';
    }
}