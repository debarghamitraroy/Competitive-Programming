#include <iostream>
#include <bitset>
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
    ll totalCodes = 1LL << n;
    for (ll i = 0; i < totalCodes; i++) {
        ll grayCode = i ^ (i >> 1);
        bitset<16> binary(grayCode);
        string grayString = binary.to_string().substr(16 - n);
        cout << grayString << '\n';
    }
}