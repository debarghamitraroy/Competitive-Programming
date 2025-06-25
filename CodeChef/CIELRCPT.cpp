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
        vector<int> v = {2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1};
        int size = v.size();
        int count = 0;
        for (int i = 0; i < size; i++) {
            count = count + (n / v[i]);
            n = n - (v[i] * (n / v[i]));
        }
        cout << count << '\n';
    }
}