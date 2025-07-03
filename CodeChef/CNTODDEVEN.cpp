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
        int n;
        cin >> n;
        int odd = 0, even = 0;
        for (int i = 1; i <= n; i++) {
            if (!(n % i)) {
                if (!(i % 2))
                    even++;
                else
                    odd++;
            }
        }
        cout << odd << ' ' << even << '\n';
    }
}
