#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    int count = 0, passenger = 0;
    for (int i = 0; i < n; i++) {
        passenger = passenger - a[i] + b[i];
        count = max(count, passenger);
    }
    cout << count;
}