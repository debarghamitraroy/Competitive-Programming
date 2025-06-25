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
    if (n >= 5) {
        x = n / 5;
        if (n % 5 == 0)
            cout << x;
        else if (n % 5 > 0)
            cout << x + 1;
    } else if (n <= 4 && n >= 1)
        cout << "1";
}