#include <iostream>
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
    vector<int> v(n);
    if (n % 2 == 0) {
        for (int i = 0; i < n; i++) {
            i % 2 == 0 ? v[i] = i + 2 : v[i] = i;
        }
        for (int i = 0; i < n; i++) {
            cout << v[i] << ' ';
        }
    } else
        cout << '-1';
}