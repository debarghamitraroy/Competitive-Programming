#include <iostream>
#include <algorithm>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n, x;
    cin >> n;
    int b = 0;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        b = b + a[i];
    }
    x = a[n - 1] * n - b;
    cout << x;
}