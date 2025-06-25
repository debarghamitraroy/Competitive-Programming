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
        int d, x, y, z;
        cin >> d >> x >> y >> z;
        int eventually_work = 7 * x;
        int n = 7 - d;
        int uneventually_work = (d * y) + (n * z);
        cout << max(eventually_work, uneventually_work) << '\n';
    }
}