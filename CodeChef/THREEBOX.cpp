#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void three_box(int a, int b, int c, int d) {
    int x = a + b;
    int y = b + c;
    int z = a + c;
    int n = a + b + c;
    if (n <= d)
        cout << "1\n";
    else if (x <= d || y <= d || z <= d)
        cout << "2\n";
    else
        cout << "3\n";
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        three_box(a, b, c, d);
    }
}