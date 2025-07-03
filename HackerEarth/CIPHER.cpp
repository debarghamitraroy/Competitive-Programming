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
    int n;
    cin >> n;
    for (char& ch : str) {
        if (ch >= 'A' && ch <= 'Z') {
            int x = ch - 'A';
            x = (x + n) % 26;
            ch = x + 'A';
        }
        if (ch >= 'a' && ch <= 'z') {
            int x = ch - 'a';
            x = (x + n) % 26;
            ch = x + 'a';
        }
        if (ch >= '1' && ch <= '9') {
            int x = ch - '0';
            x = (x + n) % 10;
            ch = x + '0';
        }
    }
    cout << str;
}