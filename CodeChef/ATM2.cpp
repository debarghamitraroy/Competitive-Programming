#include <iostream>
#include <vector>
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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int remaining_amount = k, check = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] <= remaining_amount) {
                remaining_amount -= arr[i];
                check = 1;
            } else
                check = 0;
            cout << check;
        }
        cout << '\n';
    }
}