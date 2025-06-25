#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n, count = 0;
    cin >> n;
    for (int i = 1; i <= 10; i++) {
        if (n % i == 0)
            count = i;
    }
    cout << count;
}