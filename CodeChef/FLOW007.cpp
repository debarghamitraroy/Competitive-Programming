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
        int reverse = 0;
        while (n != 0) {
            int rem = n % 10;
            reverse = (reverse * 10) + rem;
            n = n / 10;
        }
        cout << reverse << '\n';
    }
}