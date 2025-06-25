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
        int count = 0;
        vector<int> v1(n), v2(n);
        for (int i = 0; i < n; i++) {
            cin >> v1[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> v2[i];
        }
        for (int i = 0; i < n; i++) {
            if (v1[i] == v2[i])
                count++;
        }
        cout << count << '\n';
    }
}