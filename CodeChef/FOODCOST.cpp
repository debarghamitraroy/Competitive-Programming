#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int x, y;
    cin >> x >> y;
    int total_cost = (6 * x) + y;
    cout << total_cost;
}