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
    int a, b;
    cin >> a >> b;
    ll sum = 0;
    for (int i = a; i <= b; i++) {
        sum += arr[i];
    }
    cout << sum;
}