#include <iostream>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n;
    cin >> n;
    ll expected_sum = (ll)n * (n + 1) / 2;
    ll actual_sum = 0;
    for (int i = 1; i < n; i++) {
        int num;
        cin >> num;
        actual_sum += num;
    }
    cout << expected_sum - actual_sum;
}