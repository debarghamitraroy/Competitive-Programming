#include <iostream>
using namespace std;

void solve();

int main() {
    solve();
    return 0;
}

void solve() {
    string str;
    cin >> str;
    int n = str.size();
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        str[i] == str[i + 1] ? count++ : count = 0;
        if (count >= 6)
            break;
    }
    count >= 6 ? cout << "YES" : cout << "NO";
}