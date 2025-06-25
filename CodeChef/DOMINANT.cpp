#include <iostream>
#include <vector>
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
        vector<int> arr(3);
        for (int i = 0; i < 3; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        arr[2] > arr[0] + arr[1] ? cout << "YES\n" : cout << "NO\n";
    }
}