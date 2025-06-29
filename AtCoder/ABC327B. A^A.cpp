#include <iostream>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    ll b;
    cin >> b;
    for (int i = 1; i <= 15; i++) {
        ll n = 1;
        for (int j = 1; j <= i; j++) {
            n *= i;
        }
        if (n == b) {
            cout << i;
            return;
        }
    }
    cout << "-1";
}
