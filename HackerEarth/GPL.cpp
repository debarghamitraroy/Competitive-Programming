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
        int n;
        cin >> n;
        string str;
        cin >> str;
        ll base = 1, decimal = 0;
        for (int i = n - 1; i >= 0; i--) {
            int digit = str[i] - '0';
            decimal += (digit * base);
            base *= 2;
        }
        cout << decimal << '\n';
    }
}
