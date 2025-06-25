#include <iostream>
#include <vector>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void factorial(int n) {
    vector<int> res;
    res.push_back(1);
    for (int x = 2; x <= n; x++) {
        int carry = 0;
        for (int i = 0; i < res.size(); i++) {
            int prod = res[i] * x + carry;
            res[i] = prod % 10;
            carry = prod / 10;
        }
        while (carry) {
            res.push_back(carry % 10);
            carry /= 10;
        }
    }
    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i];
    }
    cout << '\n';
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        factorial(n);
    }
}