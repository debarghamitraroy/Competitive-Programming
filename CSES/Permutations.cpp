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
    if (n == 1 || n > 3) {
        vector<int> arr;
        for (int i = 2; i <= n; i += 2) {
            arr.push_back(i);
        }
        for (int i = 1; i <= n; i += 2) {
            arr.push_back(i);
        }
        for (auto it : arr) {
            cout << it << ' ';
        }
    } else
        cout << "NO SOLUTION";
}