#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        int n = str.length();
        if (n & 1) {
            cout << "NO\n";
            continue;
        }
        bool flag = true;
        for (int i = 0; i < n / 2; i++) {
            if (str[i] != str[i + n / 2])
                flag = false;
        }
        flag ? cout << "YES\n" : cout << "NO\n";
    }
}