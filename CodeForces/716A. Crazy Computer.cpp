#include <iostream>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    ll n, c;
    cin >> n >> c;
    ll time, flag;
    cin >> time;
    int count = 1;
    for (ll i = 1; i < n; i++) {
        cin >> flag;
        c >= (flag - time) ? count++ : count = 1;
        time = flag;
    }
    cout << count;
}