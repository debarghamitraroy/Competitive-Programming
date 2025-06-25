#include <iostream>
#include <algorithm>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int arr[4], x;
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 4);
    reverse(arr, arr + 4);
    for (int i = 1; i < 4; i++) {
        x = arr[0] - arr[i];
        cout << x << ' ';
    }
}