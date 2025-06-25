#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int h;
    cin >> h;
    h >= 8 ? h == 8 ? cout << "PERFECT" : cout << "MORE" : cout << "LESS";
}