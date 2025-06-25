#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int a, b;
    cin >> a >> b;
    int count = 0;
    while (a <= b) {
        a = a * 3;
        b = b * 2;
        count++;
    }
    cout << count;
}