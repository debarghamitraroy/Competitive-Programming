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

bool nextPrime(int a, int b) {
    int count = 0;
    if (isPrime(a) && isPrime(b)) {
        for (int i = a + 1; i < b; i++) {
            if (isPrime(i))
                count++;
        }
        if (count == 0)
            return true;
        else
            return false;
    } else
        return false;
}

void solve() {
    int a, b;
    cin >> a >> b;
    nextPrime(a, b) ? cout << "YES" : cout << "NO";
}