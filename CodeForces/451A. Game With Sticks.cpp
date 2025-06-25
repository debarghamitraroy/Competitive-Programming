#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int x, y;
    cin >> x >> y;
    if (x > y)
        swap(x, y);
    x % 2 == 0 ? cout << "Malvika" : cout << "Akshat";
}