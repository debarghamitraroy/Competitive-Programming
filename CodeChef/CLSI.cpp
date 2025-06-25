#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n, b;
    cin >> n >> b;
    if (b * 10 <= n)
        cout << "YES\n";
    else
        cout << "NO\n";
}