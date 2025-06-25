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
        int n, a;
        cin >> n >> a;
        a % 2 == 0   ? n == 1 ? cout << "Even\n" : cout << "Impossible\n" : n % 2 == 0 ? cout << "Even\n" : cout << "Odd\n";
    }
}