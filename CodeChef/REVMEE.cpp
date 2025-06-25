#include <iostream>
#include <algorithm>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    reverse(arr, arr + n);
    for (i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';
}