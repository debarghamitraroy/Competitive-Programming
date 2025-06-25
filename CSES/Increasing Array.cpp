#include <iostream>
#include <vector>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &it : arr) {
        cin >> it;
    }
    ll count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            count += (arr[i] - arr[i + 1]);
            arr[i + 1] = arr[i];
        }
    }
    cout << count;
}