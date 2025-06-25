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
        vector<int> a(2 * n);
        vector<int> count(n + 1, 0);
        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
            count[a[i]]++;
        }
        bool poss = true;
        for (int i = 0; i <= n; i++) {
            if (count[i] == 0)
                break;
            if (count[i] == 1) {
                poss = false;
                break;
            }
        }
        poss ? cout << "YES\n" : cout << "NO\n";
    }
}