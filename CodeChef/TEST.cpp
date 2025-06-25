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
    while (n != 42) {
        cout << n << '\n';
        cin >> n;
    }
}