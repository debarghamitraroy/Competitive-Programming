#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int x, y, z;
    cin >> x >> y >> z;
    int extra_calories = x - (y * z);
    extra_calories < 0 ? cout << "-1" : cout << extra_calories;
}