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
        int n, a, b;
        cin >> n >> a >> b;
        if (n >= a && n <= b)
            cout << "Take second dose now\n";
        else if (n < a && n < b)
            cout << "Too Early\n";
        else if (n > a && n > b)
            cout << "Too Late\n";
    }
}