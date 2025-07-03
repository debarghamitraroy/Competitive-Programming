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
        int a, b;
        cin >> a >> b;
        if (a > 0 && !(b % a))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}
