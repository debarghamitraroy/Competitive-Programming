#include <iostream>
#include <climits>
#include <vector>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

ll best_division = LLONG_MAX;

void divide_apples(const vector<ll>& apples, int index, ll sum1, ll sum2) {
    if (index == apples.size()) {
        ll diff = abs(sum1 - sum2);
        best_division = min(best_division, diff);
        return;
    }
    divide_apples(apples, index + 1, sum1 + apples[index], sum2);
    divide_apples(apples, index + 1, sum1, sum2 + apples[index]);
}

void solve() {
    int n;
    cin >> n;
    vector<ll> apples(n);
    for (auto& it : apples) {
        cin >> it;
    }
    divide_apples(apples, 0, 0, 0);
    cout << best_division;
}