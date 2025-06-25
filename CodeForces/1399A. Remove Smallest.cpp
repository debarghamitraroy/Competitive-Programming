#include <iostream>
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
        sort(arr, arr + n);
        int flag = 1;
        for (int i = 1; i < n; i++) {
            if ((arr[i] - arr[i - 1]) > 1) {
                flag = 0;
                break;
            }
        }
        flag == 1 ? cout << "YES\n" : cout << "NO\n";
    }
}