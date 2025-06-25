#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    double n;
    cin >> n;
    vector<int> v(n);
    double sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum = sum + v[i];
    }
    double ans = (sum / n);
    cout << fixed << setprecision(12) << ans;
}