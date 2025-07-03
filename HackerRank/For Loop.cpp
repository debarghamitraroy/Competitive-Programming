#include <iostream>
#include <vector>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    int a, b;
    cin >> a >> b;
    vector<string> arr = {"zero", "one", "two",   "three", "four", "five", "six", "seven", "eight", "nine"};
    for (int i = a; i <= b; i++) {
        i > 9 ? i & 1 ? cout << "odd\n" : cout << "even\n" : cout << arr[i] << '\n';
    }
}