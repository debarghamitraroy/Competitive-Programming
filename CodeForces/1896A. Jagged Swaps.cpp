#include <iostream>
#include <vector>
using namespace std;

#define ll long long int

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
        vector<int> arr(n);
        for (auto &it : arr) {
            cin >> it;
        }
        if (arr[0] == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
