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
        ll mul = 1;
        for (auto it : arr) {
            mul *= it;
        }
        int lsb = mul % 10;
        if (lsb == 2 || lsb == 3 || lsb == 5)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
