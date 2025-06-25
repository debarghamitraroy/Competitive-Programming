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
    int leaves = 4 + ((n - 1) * 3);
    cout << leaves;
}