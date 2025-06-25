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
        int w1, w2, x1, x2, m;
        cin >> w1 >> w2 >> x1 >> x2 >> m;
        int min_weight = x1 * m;
        int max_weight = x2 * m;
        int diff_weight = abs(w2 - w1);
        if (diff_weight >= min_weight && diff_weight <= max_weight)
            cout << "1\n";
        else
            cout << "0\n";
    }
}