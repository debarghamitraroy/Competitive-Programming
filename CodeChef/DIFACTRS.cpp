#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n, count = 0, i;
    cin >> n;
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }
    cout << count << '\n';
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            cout << i << ' ';
    }
}