#include <iostream>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    ll n, odd = 0, even = 0;
    cin >> n;
    for (int i = 1; i <= (2 * n) - 1; i++) {
        if (i % 2 != 0)
            odd = odd + i;
    }
    for (int i = 1; i <= (2 * n); i++) {
        if (i % 2 == 0)
            even = even + i;
    }
    cout << odd << ' ' << even;
}