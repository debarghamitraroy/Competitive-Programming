#include <iostream>
#include <algorithm>
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
        vector<int> v(4);
        for (int i = 0; i < 4; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int count = 2;
        for (int i = 0; i < 3; i++) {
            if (v[i] == v[i + 1])
                count--;
        }
        cout << count << '\n';
    }
}