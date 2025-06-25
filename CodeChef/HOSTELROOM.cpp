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
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int max_element = x, sum = x;
        for (int i = 0; i < n; i++) {
            sum = sum + arr[i];
            max_element = max(max_element, sum);
        }
        cout << max_element << '\n';
    }
}