#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int count = 0;
    for (int i = 1; i <= d; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            count++;
    }
    cout << count;
}