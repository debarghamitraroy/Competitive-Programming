#include <iostream>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    ll n;
    cin >> n;
    cout << n << ' ';
    while (n != 1) {
        if (n & 1)
            n = 3 * n + 1;
        else
            n >>= 1;
        cout << n << ' ';
    }
}