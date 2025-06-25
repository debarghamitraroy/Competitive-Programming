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
        int k;
        cin >> k;
        int count = 52 % k;
        cout << count << '\n';
    }
}