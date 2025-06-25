#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n, sum = 0, count = 0;
    cin >> n;
    int arr[n - 1];
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
        count = count + arr[i];
    }
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    cout << sum - count;
}