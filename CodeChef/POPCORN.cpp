#include <iostream>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll a1, a2, b1, b2, c1, c2;
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
        ll sum = 0;
        if (a1 + a2 >= b1 + b2 && a1 + a2 >= c1 + c2)
            sum = a1 + a2;
        else if (b1 + b2 >= a1 + a2 && b1 + b2 >= c1 + c2)
            sum = b1 + b2;
        else
            sum = c1 + c2;
        cout << sum << '\n';
    }
}