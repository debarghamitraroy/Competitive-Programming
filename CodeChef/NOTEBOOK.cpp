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
        int n;
        cin >> n;
        int pages = (n * 1000);
        int notebooks = pages / 100;
        cout << notebooks << '\n';
    }
}