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
        int arr[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << "1 ";
            }
            cout << '\n';
        }
        cout << '\n';
    }
}