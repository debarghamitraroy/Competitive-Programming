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
        int Petra, Vasya, Tonya;
        cin >> Petra >> Vasya >> Tonya;
        if (Petra + Vasya + Tonya >= 2)
            count++;
    }
    cout << count;
}