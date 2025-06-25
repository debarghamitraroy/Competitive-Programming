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
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int min_dist = min(x1, min(x2, x3));
    int max_dist = max(x1, max(x2, x3));
    cout << max_dist - min_dist;
}