#include <iostream>
#include <cmath>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

bool isPrime(int n) {
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            count++;
    }
    if (n > 1 && count == 0)
        return true;
    else
        return false;
}

void solve() {
    string str;
    cin >> str;
    int res = 0;
    for (auto it : str) {
        if (it >= 'a' && it <= 'z')
            res += (int(it) - 32);
        if (it >= 'A' && it <= 'Z')
            res -= (int(it) + 32);
    }
    if (isPrime(abs(res)))
        cout << '1';
    else
        cout << '0';
}
