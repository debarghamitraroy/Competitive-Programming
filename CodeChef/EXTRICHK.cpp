#include <iostream>
#include <algorithm>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int arr[3];
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 3);
    if (arr[0] + arr[1] > arr[2]) {
        if (arr[0] == arr[1] && arr[1] == arr[2] && arr[0] == arr[2])
            cout << "1\n";
        else if (arr[0] != arr[1] && arr[1] != arr[2] && arr[0] != arr[2])
            cout << "3\n";
        else
            cout << "2\n";
    } else
        cout << "-1\n";
}