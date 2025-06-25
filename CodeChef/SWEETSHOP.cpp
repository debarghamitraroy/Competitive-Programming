#include <iostream>
#include <cmath>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int x, n;
    cin >> x >> n;
    x > n * 10 ? cout << floor((x - (n * 10)) / 20) : cout << "0";
}