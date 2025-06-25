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
    int iq = (n + 7);
    iq > 170 ? cout << "YES" : cout << "NO";
}