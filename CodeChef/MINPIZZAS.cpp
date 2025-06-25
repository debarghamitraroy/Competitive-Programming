#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << n / gcd(n, k) << '\n';
    }
}