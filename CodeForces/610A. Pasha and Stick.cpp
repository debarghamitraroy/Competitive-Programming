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
    if (n == 1)
        cout << '0';
    else if (n & 1)
        cout << '0';
    else {
        int square_edge = n / 4;
        int rectangle_edge = n / 2 - 1;
        cout << abs(rectangle_edge - square_edge);
    }
}
