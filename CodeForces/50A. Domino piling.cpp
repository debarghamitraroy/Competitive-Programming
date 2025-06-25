#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n, m;
    cin >> n >> m;
    int area = n * m;
    int ans = area / 2;
    cout << ans;
}