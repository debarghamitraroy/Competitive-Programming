#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

int sum(int d, int n) {
    int temp, rem, mem = n;
    while (d != 0) {
        rem = (mem * (mem + 1)) / 2;
        temp = rem;
        mem = temp;
        d--;
    }
    return mem;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int d, n;
        cin >> d >> n;
        cout << sum(d, n) << '\n';
    }
}