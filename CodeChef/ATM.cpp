#include <iostream>
#include <iomanip>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    float x, y;
    cin >> x >> y;
    float remaining_amount = y - x - 0.50;
    cout << fixed << setprecision(2) << remaining_amount;
}