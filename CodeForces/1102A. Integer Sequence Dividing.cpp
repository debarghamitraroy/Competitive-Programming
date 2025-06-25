#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n;
    cin >> n;
    int rem = n % 4;
    if (rem == 0 || rem == 3)
        cout << '0';
    else
        cout << '1';
}
