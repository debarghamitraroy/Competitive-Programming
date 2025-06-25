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
        int count = 0;
        if (n <= 1)
            cout << "NO\n";
        else {
            for (int i = 2; i < n; i++) {
                if (n % i == 0)
                    count++;
            }
            count == 0 ? cout << "YES\n" : cout << "NO\n";
        }
    }
}