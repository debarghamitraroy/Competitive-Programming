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
    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= n; j++) {
            j >= i ? cout << '*' : cout << ' ';
        }
        cout << '\n';
    }
}