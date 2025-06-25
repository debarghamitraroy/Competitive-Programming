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
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (str[i] == '4')
                count++;
        }
        cout << count << '\n';
    }
}