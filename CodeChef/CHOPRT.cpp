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
        char ch;
        if (a > b)
            ch = '>';
        else if (a < b)
            ch = '<';
        else
            ch = '=';
        cout << ch << '\n';
    }
}