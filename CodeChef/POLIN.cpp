#include <iostream>
#include <vector>
#include <set>
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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i] >> b[i];
        set<int> s1, s2;
        for (int i = 0; i < n; ++i) {
            s1.emplace(a[i]);
            s2.emplace(b[i]);
        }
        if (n == 1)
            cout << "2\n";
        else {
            int counta = s1.size();
            int countb = s2.size();
            cout << (counta + countb) << '\n';
        }
    }
}