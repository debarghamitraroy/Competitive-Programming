#include <iostream>
#include <algorithm>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n = 3;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int i = n - 2;
    if (arr[i] <= arr[n - 1])
        cout << arr[i] << '\n';
    i--;
}