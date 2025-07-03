#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    int cth_num = 0;
    for (int i = 2; c > 0; i++) {
        if (i % a == 0 || i % b == 0)
            c--;
        cth_num = i;
    }
    int lcm = 0;
    for (int i = 1; i <= a * b; i++) {
        if (i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
    }
    int step = 0;
    if (cth_num % a == 0 && cth_num % b == 0)
        step = lcm;
    else if (cth_num % a == 0)
        step = a;
    else
        step = b;
    for (int i = cth_num; i >= 0; i -= step) {
        cout << i << ' ';
    }
}
