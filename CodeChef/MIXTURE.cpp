#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void mixture(int a, int b) {
    if (a > 0 && b > 0)
        cout << "Solution\n";
    if (a == 0)
        cout << "Liquid\n";
    if (b == 0)
        cout << "Solid\n";
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        mixture(a, b);
    }
}