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
    int count = 0;
    while (t--) {
        string s;
        cin >> s;
        if (s[0] == '+')
            count++;
        if (s[0] == '-')
            count--;
        if (s[2] == '+')
            count++;
        if (s[2] == '-')
            count--;
    }
    cout << count;
}