#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    char c1, c2, c3;
    cin >> c1 >> c2 >> c3;
    if (c1 == 'R' || c2 == 'R')
        cout << "R";
    else if ((c1 == 'B' && c2 == 'G') || (c1 == 'G' && c2 == 'B') || (c1 == 'B' && c2 == 'B'))
        cout << "B";
    else
        cout << "G";
}