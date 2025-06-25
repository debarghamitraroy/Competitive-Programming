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
        int x;
        cin >> x;
        if (x % 5 != 0)
            cout << "-1\n";
        else {
            if (x % 10 == 0)
                cout << (x / 10) << '\n';
            else if (x % 5 == 0)
                cout << (x / 10) + 1 << '\n';
        }
    }
}