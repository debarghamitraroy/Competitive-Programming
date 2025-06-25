#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n, k;
    cin >> n >> k;
    int count = 0;
    while (n--) {
        int x;
        cin >> x;
        if (x % k == 0)
            count++;
    }
    cout << count;
}