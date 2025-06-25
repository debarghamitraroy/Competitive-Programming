#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n, k;
    cin >> n >> k;
    int amount = 10000 * (n - k);
    cout << amount;
}