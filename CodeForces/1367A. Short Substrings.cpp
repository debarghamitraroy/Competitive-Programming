#include <iostream>
#include <string>
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
        string a, b;
        cin >> b;
        for (int j = 0; j < b.size(); j += 2) {
            a = a + b[j];
        }
        a = a + b[b.size() - 1];
        cout << a << '\n';
    }
}