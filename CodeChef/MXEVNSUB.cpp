#include <iostream>
#include <cmath>
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
        double n;
        cin >> n;
        int odd = ceil(n / 2);
        if (odd % 2 == 0)
            cout << n << '\n';
        else
            cout << n - 1 << '\n';
    }
}