#include <iostream>
using namespace std;

#define ll long long int

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll x, y, z;
        cin >> x >> y >> z;
        if (x + y < z)
            cout << "PLANEBUS\n";
        else if (x + y > z)
            cout << "TRAIN\n";
        else
            cout << "EQUAL\n";
    }
}