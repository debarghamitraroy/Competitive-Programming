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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if ((a - c) < (b - d))
            cout << "First\n";
        else if ((a - c) > (b - d))
            cout << "Second\n";
        else
            cout << "Any\n";
    }
}