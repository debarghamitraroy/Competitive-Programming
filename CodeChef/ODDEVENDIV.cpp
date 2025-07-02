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
        if (a == 0 && b == 0)
            cout << "No\n";
        else if (a == 0 && b != 0)
            cout << "No\n";
        else {
            if ((a + b) % a == 0)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
}
