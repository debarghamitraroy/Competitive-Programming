#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int a, b, n;
    cin >> a >> b >> n;
    a = a * 10;
    for (int i = 0; i <= 9; i++) {
        if ((a + i) % b == 0) {
            a = a + i;
            cout << a;
            if (n > 1)
                cout << string(n - 1, '0');
            break;
        }
    }
    if (a % b != 0)
        cout << "-1";
}