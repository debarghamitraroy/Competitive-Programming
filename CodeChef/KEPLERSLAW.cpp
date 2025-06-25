#include <iostream>
#include <cmath>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

bool keplarsLaw(int t1, int t2, int r1, int r2) {
    int t1_sq = pow(t1, 2);
    int t2_sq = pow(t2, 2);
    int r1_cu = pow(r1, 3);
    int r2_cu = pow(r2, 3);
    int first = t1_sq * r2_cu;
    int second = t2_sq * r1_cu;
    if (first == second)
        return true;
    else
        return false;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int t1, t2, r1, r2;
        cin >> t1 >> t2 >> r1 >> r2;
        keplarsLaw(t1, t2, r1, r2) ? cout << "YES\n" : cout << "NO\n";
    }
}