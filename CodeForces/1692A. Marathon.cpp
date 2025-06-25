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
        int t;
        cin >> t;
        while (t--) {
            int n = 4;
            int arr[n];
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }
            int count = 0;
            for (int i = 0; i < (n - 1); i++) {
                if (arr[0] < arr[i + 1])
                    count++;
            }
            cout << count << '\n';
        }
    }
}