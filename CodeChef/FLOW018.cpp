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
        long long int count = 1;
        for (int i = 1; i <= n; i++) {
            count = count * i;
        }
        cout << count << '\n';
    }
}