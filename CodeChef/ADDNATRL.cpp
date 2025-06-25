#include <iostream>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    ll n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    cout << sum;
}