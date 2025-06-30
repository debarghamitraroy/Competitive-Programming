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
    if (n % 2)
        cout << "2";
    else
        cout << "1";
}

