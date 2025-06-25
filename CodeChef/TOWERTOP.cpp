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
        long long int x, m;
        cin >> x >> m;
        long long int min = ceil(log2(x)) + 1;
        int ans = 0;
        m < min ? cout << "0\n" : cout << (m - min + 1) << '\n';
    }
}