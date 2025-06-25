#include <iostream>
#include <vector>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

ll fibbonacci_sum(int n) {
    vector<ll> fib(n);
    fib[0] = 1;
    fib[1] = 1;
    ll ans = 2;
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        ans += fib[i];
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    if (n == 1)
        cout << '1';
    else if (n == 2)
        cout << '2';
    else {
        ll ans = fibbonacci_sum(n);
        cout << ans;
    }
}