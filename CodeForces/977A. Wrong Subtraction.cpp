#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n = 0, k = 0;
    cin >> n >> k;
    while (k--) {
        n % 10 == 0 ? n = n / 10 : n = n - 1;
    }
    cout << n;
}