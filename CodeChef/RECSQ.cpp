#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a * b == c * c)
        cout << "YES";
    else
        cout << "NO";
}
