#include <iostream>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n;
    cin >> n;
    ll count = 0;
    for (ll i = 5; i <= n; i *= 5) {
        count += n / i;
    }
    cout << count;
}