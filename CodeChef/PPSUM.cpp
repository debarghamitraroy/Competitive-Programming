#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

int sum(int n) {
    if (n == 1)
        return 1;
    return (n + sum(n - 1));
}

int sumTimes(int d, int n) {
    if (d == 0)
        return n;
    return sumTimes(d - 1, sum(n));
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int d, n;
        cin >> d >> n;
        cout << sumTimes(d, n) << '\n';
    }
}