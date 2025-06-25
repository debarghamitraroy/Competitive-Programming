#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0;
    int x = arr[0], y = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > x) {
            x = arr[i];
            count++;
        }
        if (arr[i] < y) {
            y = arr[i];
            count++;
        }
    }
    cout << count;
}