#include <iostream>
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
        int maxT, maxN, sumN;
        cin >> maxT >> maxN >> sumN;
        ll isPossible = maxT * maxN, ans = 0;
        if (isPossible > sumN) {
            while (sumN > 0) {
                sumN > maxN ? ans += (maxN * maxN) : ans += sumN * sumN;
                sumN -= maxN;
            }
        } else
            ans = maxT * maxN * maxN;
        cout << ans << '\n';
    }
}