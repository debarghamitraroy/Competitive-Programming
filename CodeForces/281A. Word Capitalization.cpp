#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    string str;
    cin >> str;
    if (str[0] >= 97)
        str[0] = str[0] - 32;
    cout << str;
}