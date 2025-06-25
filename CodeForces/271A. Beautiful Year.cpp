#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int year;
    cin >> year;
    while (true) {
        year++;
        int a = year / 1000;
        int b = (year / 100) % 10;
        int c = (year / 10) % 10;
        int d = year % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
            break;
    }
    cout << year;
}