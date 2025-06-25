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
    (n % 5 == 0 || n % 6 == 0) ? cout << "YES" : cout << "NO";
}