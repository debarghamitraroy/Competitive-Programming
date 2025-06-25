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
        int n;
        cin >> n;
        vector<int> v = {100, 50, 10, 5, 2, 1};
        int count = 0;
        for (int i = 0; i < 6; i++) {
            count = count + (n / v[i]);
            n = n - (v[i] * (n / v[i]));
        }
        cout << count << '\n';
    }
}