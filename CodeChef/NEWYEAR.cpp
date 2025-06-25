#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int x;
    cin >> x;
    int remaining_hours = 24 - x;
    cout << remaining_hours;
}