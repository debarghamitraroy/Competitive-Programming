#include <iostream>
#include <algorithm>
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
        int r = 8, c = 8;
        char str[r][c];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> str[i][j];
            }
        }
        int row = 0, col = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (str[i][j] == '#' && str[i - 1][j - 1] == '#' && str[i + 1][j - 1] == '#' && str[i - 1][j + 1] == '#' && str[i + 1][j + 1] == '#') {
                    row = i + 1;
                    col = j + 1;
                    break;
                }
            }
        }
        cout << row << ' ' << col << '\n';
    }
}