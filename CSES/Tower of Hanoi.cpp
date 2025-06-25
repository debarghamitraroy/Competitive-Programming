#include <iostream>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

void towerOfHanoi(int n, int source, int destination, int auxiliary) {
    if (n == 1)
        cout << source << ' ' << destination << '\n';
    else {
        towerOfHanoi(n - 1, source, auxiliary, destination);
        cout << source << ' ' << destination << '\n';
        towerOfHanoi(n - 1, auxiliary, destination, source);
    }
}

void solve() {
    int n;
    cin >> n;
    ll total_moves = (1LL << n) - 1;
    cout << total_moves << '\n';
    towerOfHanoi(n, 1, 3, 2);
}