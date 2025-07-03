#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= (3 * n) + 2; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i % 3 == 0)
                cout << '*';
            else {
                if (j == 1 || j == 5)
                    cout << '*';
                else
                    cout << ' ';
            }
        }
        cout << '\n';
    }
}