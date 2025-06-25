#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int r, o, c;
    cin >> r >> o >> c;
    int rem = (20 - o);
    int remBall = (rem * 6);
    int remRun = (r - c);
    int maxRun = (remBall * 6);
    maxRun > remRun ? cout << "YES" : cout << "NO";
}