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
        if (str[i] == '.')
            cout << '0';
        if (str[i] == '-' && str[i + 1] == '.') {
            cout << '1';
            i++;
        }
        if (str[i] == '-' && str[i + 1] == '-') {
            cout << '2';
            i++;
        }
    }
}