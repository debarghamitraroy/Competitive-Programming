#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int a, b;
    cin >> a >> b;
    a > b ? cout << (a - b) : cout << "0";
}