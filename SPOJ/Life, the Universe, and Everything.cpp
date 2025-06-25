#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    while (true) {
        int n;
        cin >> n;
        if (n == 42)
            break;
        cout << n << '\n';
    }
}