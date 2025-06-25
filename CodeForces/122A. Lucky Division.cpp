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
    int i = 0;
    int luckyNumbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    for (i = 0; i < 14; i++) {
        if (n % luckyNumbers[i] == 0) {
            cout << "YES";
            break;
        }
    }
    if (i == 14)
        cout << "NO";
}