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
        vector < int > arr(n);
        for (auto & it: arr) {
            cin >> it;
        }
        int count = 0;
        for (auto it: arr) {
            count += (it - 1);
        }
        cout << count << '\n';
    }
}
