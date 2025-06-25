#include <iostream>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

ll gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << gcd(a, b) << ' ' << lcm(a, b) << '\n';
    }
}