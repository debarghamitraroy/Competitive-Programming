#include <iostream>
#include <vector>
using namespace std;

#define ll long long int
#define mod 1000000007

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto& it : arr) {
        cin >> it;
    }
    ll ans = 1;
    for (auto it : arr) {
        ans = (ans * it) % mod;
    }
    cout << ans;
}