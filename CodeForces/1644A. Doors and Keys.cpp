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
        string s;
        cin >> s;
        int n = s.size();
        int count = 0;
        int b = 0, r = 0, g = 0, B = 0, G = 0, R = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'r')
                r = i;
            if (s[i] == 'b')
                b = i;
            if (s[i] == 'g')
                g = i;
            if (s[i] == 'G')
                G = i;
            if (s[i] == 'B')
                B = i;
            if (s[i] == 'R')
                R = i;
        }
        (r < R && b < B && g < G) ? cout << "YES\n" : cout << "NO\n";
    }
}