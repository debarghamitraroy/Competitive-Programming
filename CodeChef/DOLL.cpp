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
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > k)
                count++;
        }
        cout << count << '\n';
    }
}