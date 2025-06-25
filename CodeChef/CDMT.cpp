#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int x, y;
    cin >> x >> y;
    x < y ? cout << "Yes" : cout << "No";
}