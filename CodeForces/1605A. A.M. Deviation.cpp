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
        int a, b, c;
        cin >> a >> b >> c;
        int result = (a + c - (2 * b));
        abs(result) % 3 == 0 ? cout << "0\n" : cout << "1\n";
    }
}