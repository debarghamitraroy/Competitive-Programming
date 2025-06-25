#include <iostream>
#include <vector>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n;
    cin >> n;
    vector<int> x(n), y(n), z(n);
    int countX = 0, countY = 0, countZ = 0;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i] >> z[i];
        countX += x[i];
        countY += y[i];
        countZ += z[i];
    }
    (!countX && !countY && !countZ) ? cout << "YES" : cout << "NO";
}
