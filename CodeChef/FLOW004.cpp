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
        int last = n % 10;
        while (n >= 10) {
            n = n / 10;
        }
        int first = n;
        int ans = first + last;
        cout << ans << '\n';
    }
}