#include <iostream>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

ll knightCollide(int n) {
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (8 * i);
    }
    return sum;
}

void solve() {
    int n;
    cin >> n;
    cout << "0\n";
    for (int i = 2; i <= n; i++) {
        ll total_edges = i * i;
        ll total_squares = total_edges * (total_edges - 1) / 2;
        ll possible_squares = total_squares - knightCollide(i - 2);
        cout << possible_squares << '\n';
    }
}