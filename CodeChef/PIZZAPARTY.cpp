#include <iostream>
#include <cmath>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int a, b;
    cin >> a >> b;
    float total_slice = ((a + 1) * 4) + (b * 3);
    int total_pizza = ceil(total_slice / 8);
    cout << total_pizza;
}