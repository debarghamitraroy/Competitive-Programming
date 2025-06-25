#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int f1, f2, p1, p2;
    cin >> f1 >> p1 >> f2 >> p2;
    if (abs(f1 - p1) > abs(f2 - p2))
        cout << "SECOND";
    else if (abs(f1 - p1) < abs(f2 - p2))
        cout << "FIRST";
    else
        cout << "BOTH";
}