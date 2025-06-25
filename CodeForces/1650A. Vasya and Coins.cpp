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
    if (a == 0)
        cout << "1";
    else {
        int total = a + (2 * b) + 1;
        cout << total;
    }
}