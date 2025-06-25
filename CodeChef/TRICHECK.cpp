#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    (a + b > c && b + c > a && c + a > b) ? cout << "YES" : cout << "NO";
}