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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto& it : arr) {
        cin >> it;
    }
    sort(arr.rbegin(), arr.rend());
    for (int i = n; i > 0; i--) {
        if (arr[i - 1] >= i) {
            cout << i << '\n';
            return;
        }
    }
    cout << "0\n";
}