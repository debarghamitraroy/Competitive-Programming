#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > 50 || b > 50 || c > 50) {
            if (a > b && a > c)
                cout << "A\n";
            else if (b > a && b > c)
                cout << "B\n";
            else if (c > a && c > b)
                cout << "C\n";
            else
                cout << "NOTA\n";
        } else
            cout << "NOTA\n";
    }
}