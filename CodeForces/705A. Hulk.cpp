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
    for (int i = 1; i <= n; i++) {
        i % 2 == 1 ? cout << "I hate " : cout << "I love ";
        i == n ? cout << "it" : cout << "that ";
    }
}