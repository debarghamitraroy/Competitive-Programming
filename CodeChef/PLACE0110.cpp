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
        int x, y;
        cin >> x >> y;
        int min_distinct = 2 * min(x, y);
        int max_distinct = 2 * abs(x - y);
        int total_distinct = min_distinct + max_distinct;
        if (x == y)
            cout << total_distinct << '\n';
        else
            cout << total_distinct - 1 << '\n';
    }
}