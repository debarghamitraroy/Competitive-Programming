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
    ll n;
    cin >> n;
    ll total_sum = n * (n + 1) / 2;
    if (!(total_sum & 1)) {
        cout << "YES\n";
        ll target_sum = total_sum / 2;
        vector<ll> set1, set2;
        vector<bool> choosen(n + 1, false);
        for (ll i = n; i >= 1; i--) {
            if (i <= target_sum) {
                set1.push_back(i);
                choosen[i] = true;
                target_sum -= i;
            } else
                set2.push_back(i);
        }
        cout << set1.size() << '\n';
        for (ll it : set1) {
            cout << it << ' ';
        }
        cout << '\n' << set2.size() << '\n';
        for (ll it : set2) {
            cout << it << ' ';
        }
    } else
        cout << "NO";
}