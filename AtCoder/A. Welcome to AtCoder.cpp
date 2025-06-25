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
    string str;
    cin >> str;
    cout << a + b + c << ' ' << str;
}