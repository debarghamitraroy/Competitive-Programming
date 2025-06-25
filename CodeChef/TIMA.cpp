#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int x;
    cin >> x;
    x >= 2025 && x <= 2075 ? cout << "YES" : cout << "NO";
}