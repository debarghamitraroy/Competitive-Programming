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
    if (n % 5 == 0 && n % 11 == 0)
        cout << "BOTH";
    else if (n % 5 == 0 || n % 11 == 0)
        cout << "ONE";
    else
        cout << "NONE";
}