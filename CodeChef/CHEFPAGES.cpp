#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int n, x;
    cin >> n >> x;
    n == 0 ? cout << "https://www.codechef.com/practice" : x == 0 ? cout << "https://www.codechef.com/contests" : cout << "https://discuss.codechef.com";
}