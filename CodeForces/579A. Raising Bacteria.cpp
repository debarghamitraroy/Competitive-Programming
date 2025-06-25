#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n, x = 0;
    cin >> n;
    while (n != 0) {
        if (n % 2 == 1) {
            x = x + 1;
            n = n - 1;
        } else
            n = n / 2;
    }
    cout << x;
}