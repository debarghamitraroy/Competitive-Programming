#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n;
    cin >> n;
    n / 2 == 1 ? cout << "NO" : n % 2 == 0 ? cout << "YES" : cout << "NO";
}