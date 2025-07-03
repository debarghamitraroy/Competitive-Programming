#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int x, y;
    cin >> x >> y;
    for (int i = x; i <= y; i++) {
        if (!(i % 3) && !(i % 5))
            cout << "FizzBuzz ";
        else if (!(i % 3))
            cout << "Fizz ";
        else if (!(i % 5))
            cout << "Buzz ";
        else
            cout << i << ' ';
    }
}