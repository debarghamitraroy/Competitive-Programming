#include <iostream>
#include <iomanip>
#include <algorithm>
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
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + arr[i];
        }
        int max = *max_element(arr, arr + n);
        double p = (double)(sum - max) / (n - 1);
        p = p + max;
        cout << fixed << setprecision(10) << p << '\n';
    }
}