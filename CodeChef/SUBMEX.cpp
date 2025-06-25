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
        int n, k, x;
        cin >> n >> k >> x;
        if (k < x) {
            cout << "-1\n";
            continue;
        }
        vector<int> v;
        while (n)
            for (int i = 0; i < x; i++) {
                v.push_back(i);
                n--;
                if (n == 0)
                    break;
            }
        for (auto it : v) {
            cout << it << ' ';
        }
        cout << '\n';
    }
}