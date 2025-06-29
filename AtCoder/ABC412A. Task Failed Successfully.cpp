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
    int count = 0;
    while (n--) {
        int a, b;
        cin >> a >> b;
        if (a < b)
            count++;
    }
    cout << count;
}
