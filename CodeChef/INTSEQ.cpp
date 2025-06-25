#include <iostream>
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
        int k;
        cin >> k;
        int count = 0;
        while (k % 2 == 0) {
            count++;
            k = k / 2;
        }
        cout << count << '\n';
    }
}