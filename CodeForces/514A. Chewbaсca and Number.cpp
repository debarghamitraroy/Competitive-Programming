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
    int n = str.size();
    for (int i = 0; i < n; i++) {
        if (str[i] > '4')
            str[i] = '9' - str[i] + '0';
    }
    if (str[0] == '0')
        str[0] = '9';
    cout << str;
}