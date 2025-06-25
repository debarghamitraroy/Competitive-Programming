#include <iostream>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    ll n, x;
    cin >> n;
    x = (n - 1) % 9 + 1;
    cout << x;
}